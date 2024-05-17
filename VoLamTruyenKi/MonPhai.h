#pragma once
#include "He.h"
class MonPhai
{
private:
	string ten;
	He element;
public:
	MonPhai();
	MonPhai(string, He);
	~MonPhai();
	string getTenPhai();
	He getHe();
	string getTenHe();
};

