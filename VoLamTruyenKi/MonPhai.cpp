#include "MonPhai.h"

MonPhai::MonPhai()
{}

MonPhai::~MonPhai()
{}

MonPhai::MonPhai(string Name, He Class)
{
	ten = Name;
	element = *new He(Class);
}

string MonPhai::getTenPhai()
{
	return this->ten;
}

string MonPhai::getTenHe()
{
	return this->element.getTenHe();
}

He MonPhai::getHe()
{
	return this->element;
}