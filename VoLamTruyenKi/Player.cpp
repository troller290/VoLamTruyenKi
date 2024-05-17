#include "Player.h"

Player::Player()
{
	level = 1;
}

void Player::ChonPhai()
{
	cout << "\t-----BANG PHAI-----\t\n";
	cout << "\n1.Thieu Lam";
	cout << "\n2.Thien Vuong bang";
	cout << "\n3.Ngu Doc giao";
	cout << "\n4.Duong Mon";
	cout << "\n5.Nga My";
	cout << "\n6.Thuy Yen mon";
	cout << "\n7.Cai Bang";
	cout << "\n8.Thien Nhan giao";
	cout << "\n9.Con Lon";
	cout << "\n10.Vo Dang\n";
	int phai;
	do
	{
		cout << "\nChon bang phai: ";
		cin >> phai;
		switch (phai)
		{
		case 1:
			bang = MonPhai::MonPhai("Thieu Lam", He::He("Kim", "Thuy", "Moc")); //ThieuLam;
			element = He::He("Kim", "Thuy", "Moc");
			break;
		case 2:
			bang = MonPhai::MonPhai("Thien Vuong bang", He::He("Kim", "Thuy", "Moc")); //ThienVuongBang;
			element = He::He("Kim", "Thuy", "Moc");
			break;
		case 3:
			bang = MonPhai::MonPhai("Ngu Doc giao", He::He("Moc", "Hoa", "Tho")); //NguDocGiao;
			element = He::He("Moc", "Hoa", "Tho");
			break;
		case 4:
			bang = MonPhai::MonPhai("Duong Mon", He::He("Moc", "Hoa", "Tho")); //DuongMon;
			element = He::He("Moc", "Hoa", "Tho");
			break;
		case 5:
			bang = MonPhai::MonPhai("Nga My", He::He("Thuy", "Moc", "Hoa")); //NgaMy;
			element = He::He("Thuy", "Moc", "Hoa");
			break;
		case 6:
			bang = MonPhai::MonPhai("Thuy Yen mon", He::He("Thuy", "Moc", "Hoa")); //ThuyYenMon;
			element = He::He("Thuy", "Moc", "Hoa");
			break;
		case 7:
			bang = MonPhai::MonPhai("Cai Bang", He::He("Hoa", "Tho", "Kim")); //CaiBang;
			element = He::He("Hoa", "Tho", "Kim");
			break;
		case 8:
			bang = MonPhai::MonPhai("Thien Nhan giao", He::He("Hoa", "Tho", "Kim")); //ThienNhanGiao;
			element = He::He("Hoa", "Tho", "Kim");
			break;
		case 9:
			bang = MonPhai::MonPhai("Con Lon", He::He("Tho", "Kim", "Thuy")); //ConLon;
			element = He::He("Tho", "Kim", "Thuy");
			break;
		case 10:
			bang = MonPhai::MonPhai("Vo Dang", He::He("Tho", "Kim", "Thuy")); //VoDang;
			element = He::He("Tho", "Kim", "Thuy");
			break;
		default:
			cout << "\nKhong hop le. Vui long chon lai.\n";
			break;
		}
	} while (phai < 1 || phai > 10);
}

void Player::Nhap()
{
	cout << "\t----------------------\t\n";
	cin.ignore();
	cout << "Nhap ten nguoi choi: "; getline(cin, name);
	cout << "Nhap cap do cua ban: "; cin >> level;
	ChonPhai();
	damage = TinhSatThuong();
}

void Player::Xuat()
{
	cout << "\t====THONG TIN PLAYER====\t\n";
	cout << "\nNguoi choi: " << name;
	cout << "\nCap do: " << level;
	cout << "\nMon phai: " << bang.getTenPhai();
	cout << "\nHe: " << element.getTenHe() << endl;
}

MonPhai Player::getPhai()
{
	return bang;
}

int Player::TinhSatThuong()
{
	return level * 5;
}

void Player::Attack(GameObj *target)
{
	if (this->getPhai().getHe().getSinh() == target->getHe().getTenHe())
	{
		float satthuong = this->getDamage() + this->getDamage() * 0.1;
		cout << this->getTen() << " gay " << satthuong << " sat thuong len " << target->getTen() << endl;
	}
	else if (this->getPhai().getHe().getKhac() == target->getHe().getTenHe())
	{
		float satthuong = this->getDamage() + this->getDamage() * 0.2;
		cout << this->getTen() << " gay " << satthuong << " sat thuong len " << target->getTen() << endl;
	}
	else if (this->getPhai().getTenHe() == target->getHe().getKhac())
	{
		float satthuong = this->getDamage() - this->getDamage() * 0.2;
		cout << this->getTen() << " gay " << satthuong << " sat thuong len " << target->getTen() << endl;
	}
	else
	{
		float satthuong = (float)this->getDamage();
		cout << this->getTen() << " gay " << satthuong << " sat thuong len " << target->getTen() << endl;
	}
}