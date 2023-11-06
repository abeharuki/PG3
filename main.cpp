#include <stdio.h>
#include "Move.h"
#include "Bicycle.h"
#include "Pedestrian.h"

int main(void) {
	Move* Moves[3];
	
	printf("生成フェーズ\n");
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			Moves[i] = new Bicycle;
		}
		else {
			Moves[i] = new Pedestrian;
		}
	}

	printf("移動フェーズ\n");
	for (int i = 0; i < 2; i++) {
		Moves[i]->Accident();
	}

	printf("破棄フェーズ\n");
	for (int i = 0; i < 2; i++) {
		delete Moves[i];
	}

	return 0;
}