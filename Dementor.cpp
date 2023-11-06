#include "Dementor.h"
#include <stdio.h>

Dementor::Dementor() {
	for (int i = 0; i < 3; i++) {
		printf("ディメンターが現れた\n");
	}
	
}

Dementor::~Dementor() {
	for (int i = 0; i < 3; i++) {
		printf("ディメンターを倒した\n");
	}
	
}


void Dementor::Attack() {
	for (int i = 0; i < 3; i++) {
		printf("ディメンターの吸魂鬼のキス\n");
	}
	
}


