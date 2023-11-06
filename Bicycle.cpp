#include "Bicycle.h"
#include <stdio.h>

Bicycle::Bicycle() {
	name = "自転車";

	for (int i = 0; i < 3; i++) {
		printf("%sで移動する\n",name);
	}
	
}

Bicycle::~Bicycle() {
	for (int i = 0; i < 3; i++) {
		
		if (i >= 2) {
			printf("%sで目的地に着けなかった\n", name);
		}
		else {
			printf("%sで目的地についた\n", name);
		}
	}
	
}


void Bicycle::Accident() {
	for (int i = 0; i < 3; i++) {
		
		if (i >= 2) {
			printf("%sで歩行者を轢いてしまった\n", name);
		}
		else {
			printf("%sで移動中\n", name);
		}
	}
	
}


