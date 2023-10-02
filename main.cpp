#include <stdio.h>

template<typename T>
T Min(T a, T b) {
	if (a < b) {
		return static_cast<T>(a);
	}
	else {
		return static_cast<T>(b);
	}
}

template<>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません");
	return 0;
}

int main() {
	printf("%d\n", Min<int>(10, 11));
	printf("%f\n", Min<float>(15.3f, 17.2f));
	printf("%lf\n", Min<double>(113, 21));
	printf("%c\n", Min<char>(1,2));
	return 0;
}