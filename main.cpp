#include <stdio.h>

int Recursive(int n1 ,int n2, int n3,int count) {
	int n = 0;
	
	if (n1+n3 > n2) {
		printf("%d���ԂōċA�I�����̌n�̂ق����ׂ���",count );
		return (1);
	}
	else {
		count += 1;
		
		if (count > 1) {
			n3 = n1 + n3;
			n1 = (n1 * 2 - 50);
			n2 = n2 + 1072;
		}
		
		printf("�ċA����[%d]����[%d�ċA,%d���],%d����\n", n1,n1+n3,n2,count);
		
		return Recursive(n1, n2,n3, count);
	}
	

	
}




int main() {
	//��
	int n = 0;
	//�ċA�I
	int n1 = 100;
	//��ʓI
	int n2 = 1072;
	int n3 = 0;
	int result = 0;

	result = Recursive(n1,n2,n3,n);
	
	
	
	return 0;
}