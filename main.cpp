#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef void(*PFunc)(int,int);

//抽選結果
int Random() {
	//シードの初期化
	srand(static_cast<unsigned int>(time(NULL)));
	int num;
	num = rand()%6 + 1;
	return num;
}

//選択
int Select(int a) {
	int num =0;
	if (a == 1) {
		num = 1;
		
	}
	else if (a == 0) {
		num = 0;
		
	}

	return num;
}

//抽選結果と選択結果を比べる
//aが抽選結果
//bが選択結果
void Compare(int a,int b) {
	int num = Select(b);
	printf("%d\n",a);

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

	

}

//三秒後に表示
void setTimeout(PFunc p, int second,int second2) {
	printf("サイコロの出目は....");

	Sleep(second * 1000);

	p(second, second2);
}

int main(void) 
{
	int check;

	printf("サイコロの出目が偶数か奇数化当ててね！\n偶数なら0奇数なら1を押してね！\n");
	scanf_s("%d", &check);
	
	PFunc p;
	p = Compare;
	setTimeout(p, Random(), check);
	

	return 0;
}