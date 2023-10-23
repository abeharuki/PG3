#pragma once

template<typename T1, typename T2>

class Compare {
public:
	T1 num1;
	T2 num2;

	Compare(T1 num1, T2 num2) :num1(num1), num2(num2) {}

	T1 min() {
		if (num1 < num2) {
			return static_cast<T1>(num1);
		}

		return static_cast<T1>(num2);
	}

};