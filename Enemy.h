#pragma once
#include <stdio.h>


class Enemy {
public:
	//近接
	void PhaseProximity();

	//射撃
	void PhaseShoot();

	//離脱
	void PhaseLeave();


private:

	enum class Phase {
		Proximity, // 接近する
		Shoot,    // 射撃
		Leave,    // 離脱する

	};

	static void (Enemy::* spFuncTable[])();
	

	Phase phase_ = Phase::Proximity;


};