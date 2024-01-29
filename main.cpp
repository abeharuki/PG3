#include <stdio.h>
#include <iostream>
#include <thread>



int main() {
	
	std::string a(100000,'a');
	
	

	auto copyStart = std::chrono::system_clock::now();
	std::string copyA = a;
	auto copyEnd = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro>elapsedlCopy = copyEnd - copyStart;

	auto moveStart = std::chrono::system_clock::now();
	std::string moveA = std::move(a);
	auto moveEnd = std::chrono::system_clock::now();
	std::chrono::duration<double, std::micro>elapsedlMove = moveEnd - moveStart;

	std::cout << elapsedlCopy.count() << "μs" << std::endl;
	std::cout << elapsedlMove.count() << "μs" << std::endl;

	return 0;
}