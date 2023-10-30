#pragma once
 
class DeathEater {
public:
	DeathEater();
	~DeathEater();
	virtual void Attack();
protected:
	const char* name;
};