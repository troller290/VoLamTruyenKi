#pragma once
#include "iostream"
#include "string"
using namespace std;
class He
{
private:
	string ten;
	string tSinh;
	string tKhac;
public:
	He();
	He(string, string, string);
	~He();
	int TuongSinh();
	int TuongKhac();
	string getTenHe();
	string getSinh();
	string getKhac();
};

