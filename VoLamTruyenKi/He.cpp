#include "He.h"

He::He()
{}

He::~He()
{}

He::He(string Name, string Sinh, string Khac)
{
	ten = Name;
	tSinh = Sinh;
	tKhac = Khac;
}

int He::TuongKhac()
{
	return 20;
}

int He::TuongSinh()
{
	return 10;
}

string He::getTenHe()
{
	return this->ten;
}
string He::getSinh()
{
	return this->tSinh;
}
string He::getKhac()
{
	return this->tKhac;
}