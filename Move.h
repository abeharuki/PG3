#pragma once

class Move {
public:
	Move();
	virtual ~Move();
	virtual void Accident();
protected:
	const char* name;
};