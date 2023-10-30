#pragma once
#include"DeathEater.h"

class  Dementor:public DeathEater
{
public:
	 Dementor();
	~Dementor();

	void Attack()override;
private:

};

 