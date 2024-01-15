#include <stdio.h>
#include <iostream>
#include <thread>

void thread(std::string thread) {
	std::cout << thread << std::endl;
}


int main() {
	
	std::thread th1(thread,"thread1");
	th1.join();

	std::thread th2(thread, "thread2");
	th2.join();

	std::thread th3(thread, "thread3");
	th3.join();


	return 0;
}