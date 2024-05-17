#pragma once
#include "GameObj.h"
#include "MonPhai.h"
class Player : public GameObj
{
private:
	MonPhai bang;
public:
	Player();
	void Nhap();
	void Xuat();
	void ChonPhai();
	MonPhai getPhai();
	int TinhSatThuong();
	void Attack(GameObj*);
};
