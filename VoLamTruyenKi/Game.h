#pragma once
#include "vector"
#include "iostream"
#include "GameObj.h"
using namespace std;
class Game
{
protected:
	vector<GameObj*> entity;
public:
	void NhapDS();
	void XuatDS();
	void TopServer();
	void Combat();

};

