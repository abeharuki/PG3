#include <stdio.h>

int AddSalary(int value1) {
	return value1 + 1072;
}

int CalculateSalary(int value2) {
	return value2 * 2 - 50;
}

int CompartionSalary(int value1, int value2,int count) {
	count++;
	
	value1 = AddSalary(value1);
	value2 = CalculateSalary(value2);
	
	if (value1 < value2) {
		return count;
		
	}

	return CompartionSalary(value1, value2, count);
	
}




int main() {
	//カウント
	int count = 0;
	//一般的給料
	int value1 = 1072;
	//再帰的時給
	int value2 = 100;
	
	printf("%d時間で再帰的な賃金体系のほうが儲かる", CompartionSalary(value1, value2,count));
		
	
	return 0;
}