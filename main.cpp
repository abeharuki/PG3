#include <stdio.h>
#include "DeathEater.h"
#include "Dementor.h"
#include "Load.h"

int main(void) {
	DeathEater* death_eaters[3];
	
	printf("生成フェーズ\n");
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			death_eaters[i] = new Dementor;
		}
		else {
			death_eaters[i] = new Load;
		}
	}

	printf("攻撃フェーズ\n");
	for (int i = 0; i < 2; i++) {
		death_eaters[i]->Attack();
	}

	printf("破棄フェーズ\n");
	for (int i = 0; i < 2; i++) {
		delete death_eaters[i];
	}

	return 0;
}