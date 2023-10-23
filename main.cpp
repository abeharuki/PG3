#include <stdio.h>
#include "Enemy.h"


int main(void) {
	Enemy* enemy_ = new Enemy();



	while (enemy_->GetPhase())
	{
		enemy_->Update();
	}
	

	return 0;
}