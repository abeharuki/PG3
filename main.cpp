#include <stdio.h>
#include "DeathEater.h"
#include "Demetor.h"

int main(void) {
	DeathEater* death_eaters[3];
	
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			death_eaters[i] = new Dementor;
		}
		else {
			death_eaters[i] = new Load;
		}
	}

	return 0;
}