#pragma once
#include "He.h"
class GameObj
{
protected:
	string name;
	int level;
	int damage = 1;
	He element;
public:
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual void Attack(GameObj*) = 0;

	int getDamage();
	He getHe();
	string getTen();
};

