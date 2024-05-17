#pragma once
#include "GameObj.h"
class Monster : public GameObj
{
private:
	int kind; //creep = 1; boss = 2;
public:
	int ChonLoai();
	void ChonHe();
	void Nhap();
	void Xuat();
	int TinhSatThuong();
	void Attack(GameObj*);
};

