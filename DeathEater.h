#pragma once



class DeathEater {
public:
	DeathEater();
	virtual ~DeathEater();
	virtual void Attack();
protected:
	const char* name;
};