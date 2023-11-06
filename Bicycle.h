#pragma once
#include"Move.h"

class  Bicycle :public Move
{
public:
	 Bicycle();
	~Bicycle();

	void Accident()override;
private:

};

 