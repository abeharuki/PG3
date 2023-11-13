#include <stdio.h>
#include "Compare.h"


int main(void) {
	
	Compare<int, int>   b1(20, 6) ;
	Compare<float, float> b2(2.0f, 1.0f);
	Compare<double, double> b3(2, 18.0);
	Compare<int, float> b4(13, 16.3);
	Compare<int, double> b5(2, 100);
	Compare<float, double> b6(20.5, 13);
	
	printf("%dのほうが小さい\n", b1.min());
	printf("%fのほうが小さい\n", b2.min());
	printf("%lfのほうが小さい\n", b3.min());
	printf("%dのほうが小さい\n", b4.min());
	printf("%dのほうが小さい\n", b5.min());
	printf("%fのほうが小さい\n", b6.min());
	return 0;
}