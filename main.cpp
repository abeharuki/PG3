#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <functional>


typedef void(*PFunc)(int, int);


//三秒後に表示
void setTimeout(PFunc p, int second, int second2) {
	

	p(second, second2);
}

int main(void)
{

	auto random_ = []() {
		//シードの初期化
		srand(static_cast<unsigned int>(time(NULL)));
		int num;
		num = rand() % 6 + 1;
		return num;
	};

	auto select_ = [](int i) {
		int num = 0;
		if (i == 1) {
			num = 1;

		}
		else if (i == 0) {
			num = 0;

		}

		return num;
	};

	auto compare_ = [&](int a, int b) {
		int num = select_(b);
		printf("%d\n", a);

		//偶数
		if (num == 0) {
			if (a % 2 == 0) {
				printf("おめでと大正解！\n");
			}
			else {
				printf("残念はずれ；；\n");
			}
		}

		//奇数
		if (num == 1) {
			if (a % 2 == 0) {
				printf("残念はずれ；；\n");
			}
			else {
				printf("おめでと大正解！\n");
			}
		}
	};

	auto setTimeout_ = [&](int second, int second2) {
		printf("サイコロの出目は....");

		Sleep(second * 1000);

		compare_(second, second2);
	};

	int check;

	printf("サイコロの出目が偶数か奇数化当ててね！\n偶数なら0奇数なら1を押してね！\n");
	scanf_s("%d", &check);

	setTimeout_( random_(), check);


	return 0;
