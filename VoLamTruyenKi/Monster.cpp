#include "Monster.h"

void Monster::ChonHe()
{
	cout << "\t----CHON HE----\t\n";
	cout << "\n1.Kim";
	cout << "\n2.Moc";
	cout << "\n3.Thuy";
	cout << "\n4.Hoa";
	cout << "\n5.Tho\n";
	int chon;
	do
	{
		cout << "\nChon he cua quai: "; cin >> chon;
		switch (chon)
		{
		case 1:
			element = He::He("Kim", "Thuy", "Moc");
			break;
		case 2:
			element = He::He("Moc", "Hoa", "Tho");
			break;
		case 3:
			element = He::He("Thuy", "Moc", "Hoa");
			break;
		case 4:
			element = He::He("Hoa", "Tho", "Kim");
			break;
		case 5:
			element = He::He("Tho", "Kim", "Thuy");
			break;
		default:
			cout << "\nKhong hop le. Vui long chon lai.\n";
			break;
		}
	} while (chon < 1 || chon > 5);
}

int Monster::ChonLoai()
{
	cout << "\t----CHUNG LOAI----\t\n";
	cout << "\n1.Thong thuong";
	cout << "\n2.Boss\n";
	int chon;
	do
	{
		cout << "\nChon loai quai vat: "; cin >> chon;
	} while (chon < 1 || chon > 2);
	return chon;
}

void Monster::Nhap()
{
	cout << "\t----------------------\t\n";
	cin.ignore();
	cout << "Nhap ten quai vat: "; getline(cin, name);
	kind = ChonLoai();
	cout << "Nhap cap do cua quai: "; cin >> level;
	ChonHe();
	damage = TinhSatThuong();
}

void Monster::Xuat()
{
	cout << "\t====THONG TIN MONSTER====\t\n";
	cout << "\nQuai vat: " << name;
	cout << "\nCap do: " << level;
	if (kind == 1) cout << "\nChung loai: quai thuong";
	else if (kind == 2) cout << "\nChung loai: boss";
	cout << "\nHe: " << element.getTenHe() << endl;
}

int Monster::TinhSatThuong()
{
	if (kind == 1)
	{
		return level * 3;
	}
	else if (kind == 2)
	{
		return level * 7;
	}
}

void Monster::Attack(GameObj* target)
{
	if (this->getHe().getSinh() == target->getHe().getTenHe())
	{
		float satthuong = this->getDamage() + this->getDamage() * 0.1;
		cout << this->getTen() << " gay " << satthuong << " sat thuong len " << target->getTen() << endl;
	}

	else if (this->getHe().getKhac() == target->getHe().getTenHe())
	{
		float satthuong = this->getDamage() + this->getDamage() * 0.2;
		cout << this->getTen() << " gay " << satthuong << " sat thuong len " << target->getTen() << endl;
	}

	else if (this->getHe().getTenHe() == target->getHe().getKhac())
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