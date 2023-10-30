#include <stdio.h>

int CalculateSalary(int n1 ,int n2, int n3,int count) {
	int n = 0;
	
	if (n1+n3 > n2) {
		printf("%d時間で再帰的な賃金体系のほうが儲かる",count );
		return (1);
	}
	else {
		count += 1;
		
		if (count > 1) {
			n3 = n1 + n3;
			n1 = (n1 * 2 - 50);
			n2 = n2 + 1072;
		}
		
		printf("再帰自給[%d]給料[%d再帰,%d一般],%d時給\n", n1,n1+n3,n2,count);
		
		return CalculateSalary(n1, n2,n3, count);
	}
	

	
}




int main() {
	//カウント
	int count = 0;
	//再帰的時給
	int n = 100;
	//一般的給料
	int value1 = 1072;
	int value2 = 0;
	int result = 0;

	result = CalculateSalary(n,value1,value2,count);
	
	
	
	return 0;
}