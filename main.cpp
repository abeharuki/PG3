#include <stdio.h>
#include <time.h>
#include <functional>
#include <Windows.h>
#include <iostream>

typedef void(*PFunc)(int);

void SetTimeout(PFunc p,int check) {
	printf("サイコロの出目は....");

	Sleep(3 * 1000);

	p(check);
}


int main(void) {


	std::function<int()> random_ = []() {
		//シードの初期化
		srand(static_cast<unsigned int>(time(NULL)));
		int num;
		num = rand() % 6 + 1;
		return num;
	};

	std::function<int(int)> select_ = [](int i) {
		int num = 0;
		if (i == 1) {
			num = 1;

		}
		else if (i == 0) {
			num = 0;

		}

		return num;
	};

	std::function <void(int)> compare_ = [&](int check) {
		int num = select_(check);
		int random = random_();
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
	};

	int check;

	printf("サイコロの出目が丁(偶数)か半(奇数)か当ててね！\n偶数なら0奇数なら1を押してね！\n");
	scanf_s("%d", &check);

	PFunc p;
	p = compare_.target<void(int)>();

	SetTimeout(p,check);


	return 0;
}