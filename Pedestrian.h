#pragma once
#include"Move.h"

class  Pedestrian :public Move
{
public:
	Pedestrian();
	~Pedestrian();

	void Accident()override;
private:

};

