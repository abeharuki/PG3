#include <stdio.h>

int Recursive(int n1 ,int n2, int n3,int count) {
	int n = 0;
	
	if (n1+n3 > n2) {
		printf("%d時間で再帰的賃金体系のほうが儲かる",count );
		return (1);
	}
	else {
		count += 1;
		
		if (count > 1) {
			n3 = n1 + n3;
			n1 = (n1 * 2 - 50);
			n2 = n2 + 1072;
		}
		
		printf("再帰時給[%d]給料[%d再帰,%d一般],%d時間\n", n1,n1+n3,n2,count);
		
		return Recursive(n1, n2,n3, count);
	}
	

	
}




int main() {
	//回数
	int n = 0;
	//再帰的
	int n1 = 100;
	//一般的
	int n2 = 1072;
	int n3 = 0;
	int result = 0;

	result = Recursive(n1,n2,n3,n);
	
	
	
	return 0;
}