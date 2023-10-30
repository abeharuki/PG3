#include "Dementor.h"
#include <stdio.h>

DeathEater::DeathEater() {
	printf("ディメンターが現れた");
}

DeathEater::~DeathEater() {
	printf("ディメンターを倒した");
}


void DeathEater::Attack() {
	printf("ディメンターの吸魂鬼のキス");
}