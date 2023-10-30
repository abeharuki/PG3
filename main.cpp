#include <stdio.h>

int AddSalary(int value1) {
	return value1 + 1072;
}

int CalculateSalary(int value2) {
	return value2 * 2 - 50;
}

int CompartionSalary(int value1, int value2,int num ,int count) {
	count++;
	
	printf("再帰自給[%d]給料[%d再帰,%d一般],%d時給\n", value2, num + value2, value1, count);

	value1 = AddSalary(value1);
	value2 = CalculateSalary(value2);
	num = num + value2;
	
	if (value1 <= value2) {
	printf("%d時間で再帰的な賃金体系のほうが儲かる",count );
	return (1);
    }

	CompartionSalary(value1,value2,num, count);
	
}




int main() {
	//カウント
	int count = 0;
	//一般的給料
	int value1 = 1072;
	int num = 0;
	//再帰的時給
	int value2 = 100;
	
	

	CompartionSalary(value1, value2,num,count);
	

	
	
	return 0;
}