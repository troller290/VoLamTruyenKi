#include "Game.h"
#include "Player.h"
#include "Monster.h"
void Game::NhapDS()
{
	int n1, n2;
	cout << "Nhap so luong nhan vat: "; cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		GameObj* input = new Player;
		input->Nhap();
		entity.push_back(input);
	}
	cout << "\nNhap so luong quai vat: "; cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		GameObj* input = new Monster;
		input->Nhap();
		entity.push_back(input);
	}
}

void Game::XuatDS()
{
		for (auto output : entity)
		{
			output->Xuat();
		}
}

void Game::TopServer()
{
	int max = entity[0]->getDamage();
	int index = 0;
	int i = 0;
	for (auto check : entity)
	{
		if (check->getDamage() > max)
		{
			max = check->getDamage();
			index = i;
		}
		i++;
	}

	cout << "\n\t----Doi tuong co muc sat thuong cao nhat (Top Server)----\t\n";
	entity[index]->Xuat();
}

void Game::Combat()
{
	int a, b;
	cout << "\n\t----Chon 2 phan tu trong danh sach de solo----\t\n";
	do
	{
		cout << "\n > Chon tu 0 den " << entity.size() - 1;
		cout << "\nDoi tuong 1: "; cin >> a;
		cout << "\nDoi tuong 2: "; cin >> b;
	} while (a < 0 || b<0 || a>entity.size() || b>entity.size());

	cout << "\t====QUA TRINH SOLO====\t\n";
	entity[a]->Attack(entity[b]);
	entity[b]->Attack(entity[a]);
}