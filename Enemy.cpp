#include "Enemy.h"
#include <Windows.h>

void (Enemy::* Enemy::spFuncTable[])() = {

	&Enemy::PhaseProximity,
	&Enemy::PhaseShoot,
	&Enemy::PhaseLeave

};

// 接近フェーズ
void Enemy::PhaseProximity() {
	printf("敵の近接\n");
	
	Sleep(3 * 1000);

	phase_ = Phase::Shoot;
	
}

void Enemy::PhaseShoot() {
	printf("敵の射撃\n");

	Sleep(3 * 1000);

	phase_ = Phase::Leave;
}

// 離脱フェーズ
void Enemy::PhaseLeave() {
	printf("敵の離脱\n");

	phase = false;

}

void Enemy::Update() {

	(this->*spFuncTable[static_cast<size_t> (phase_)])();


};