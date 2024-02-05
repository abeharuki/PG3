#include <stdio.h>
#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <sstream>
#include <fstream>
#include <cassert>

void LoadCSV(const char* fileName, std::stringstream& mapCommands){
	//ファイルを開く
	std::ifstream file;
	file.open(fileName);
	assert(file.is_open());

	//ファイルの内容を文字列ストリームにコピー
	mapCommands << file.rdbuf();

	//ファイルを閉じる
	file.close();
}

void UpdateCommands(std::stringstream& mapCommands,int map[][5]) {
	//1行分の文字列を入れる変数
	std::string line;

	int i = 0;
	//コマンド実行ループ
	while (std::getline(mapCommands,line) && i < 5) {
		//1行分の文字列をストリームに変更して解析しやすくする
		std::istringstream line_strime(line);

		std::string word;
		//,区切りで行の先頭文字列を取得
		std::getline(line_strime, word, ',');
		//"//"から始まるのはコメント
		if (word.find("//") == 0) {
			continue;
		}

		
		for (int j = 0; j < 5; j++) {
			std::getline(line_strime, word, ',');
			map[i][j] = (float)std::atof(word.c_str());
		}
	
	
		++i;
	}

	

}


int main() {
	std::mutex mutex;
	std::condition_variable condition;
	bool exit = false;
	std::stringstream mapCommands_;
	int map_[5][5];
	
	//バックグラウンドループ
	std::thread th([&]() {
		
		while (!exit) {
			std::this_thread::sleep_for(std::chrono::milliseconds(2000));
			{
				std::unique_lock<std::mutex>uniqueLock(mutex);
				LoadCSV("map.csv", mapCommands_);
				UpdateCommands(mapCommands_, map_);
				condition.notify_all();
				
			}
		}
	});

	
	//メインループ
	while (true) {
		std::unique_lock<std::mutex> uniqueLock(mutex);
		condition.wait(uniqueLock);
		for (int i = 0; i < 5; i++) {
			std::cout << "{";
			for (int j = 0; j < 5; j++) {
				std::cout << map_[i][j];
				if (j < 4) {
					std::cout << ",";
				}
			}
			std::cout << "}" << std::endl;
		}
	

		if (!exit) {
			break;
		}
	}
	
	exit = true;
	th.join();
	

	
	

	return 0;
}