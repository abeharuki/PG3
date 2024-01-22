#include <stdio.h>
#include <time.h>
#include <functional>
#include <Windows.h>
#include <iostream>

template <typename PFunc>

void SetTimeout(PFunc p, int time, int check) {
	printf("サイコロの出目は....");

	Sleep(time * 1000);

	p(check);
}


int main(void) {


	std::function<int()> Random = []() {
		//シードの初期化
		srand(static_cast<unsigned int>(time(NULL)));
		int num;
		num = rand() % 6 + 1;
		return num;
	};

	std::function<int(int)> select = [](int i) {
		int num = 0;
		if (i == 1) {
			num = 1;

		}
		else if (i == 0) {
			num = 0;

		}

		return num;
	};

	//std::function <void(int)> compare_ =

	int check;

	printf("サイコロの出目が丁(偶数)か半(奇数)か当ててね！\n偶数なら0奇数なら1を押してね！\n");
	scanf_s("%d", &check);

	

	std::function<int(int)> isCorrect = [=](int check) {
	
		int num = select(check);
		int random = Random();
		printf("%d\n", random);
		//偶数
		if (num == 0) {
			if (random % 2 == 0) {
				printf("おめでと大正解！\n");
			}
			else {
				printf("残念はずれ；；\n");
			}
		}

		//奇数
		if (num == 1) {
			if (random % 2 == 0) {
				printf("残念はずれ；；\n");
			}
			else {
				printf("おめでと大正解！\n");
			}
		}

		return num;
	};
		
	

	SetTimeout(isCorrect,3,check);


	return 0;
}