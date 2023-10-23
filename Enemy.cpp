#include "Enemy.h"
#include <Windows.h>

void (Enemy::* Enemy::spFuncTable[])() = {

	&Enemy::PhaseProximity,
	&Enemy::PhaseLeave

};

// 接近フェーズ
void Enemy::PhaseProximity() {
	printf("敵の攻撃近接\n");
	
	Sleep(3 * 1000);

	phase_ = Phase::Leave;
	
}

void Enemy::PhaseShoot() {
	printf("敵の攻撃射撃\n");
}

// 離脱フェーズ
void Enemy::PhaseLeave() {
	printf("敵の離脱\n");
}