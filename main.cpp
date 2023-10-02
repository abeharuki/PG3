#include <stdio.h>
#include <iostream>

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

	int minInt = Min<int>(10, 11);
	std::cout << minInt << std::endl;

	float minFloat = Min<float>(15.3f, 17.2f);
	std::cout << minFloat << std::endl;

	double minDouble = Min<double>(113, 21);
	std::cout << minDouble << std::endl;

	Min<char>(1,2);

	return 0;
}