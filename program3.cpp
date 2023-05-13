#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
	int No;
	char Nama[20];
	char Nim[15];
	float Tugas;
	float UTS;
	float UAS;
	float Ratarata;
	char Nilai;
};

void Input(Mahasiswa *mhs, int jumData)
{
	cout << endl;
	for (int i = 0; i < jumData; i++)
	{
		mhs[i].No = i+1;
		cout << "No : " << mhs[i].No << endl;
		cout << "Nama : "; cin >> mhs[i].Nama;
		cout << "Nim : "; cin >> mhs[i].Nim;
		cout << "Nilai Tugas : "; cin >> mhs[i].Tugas;
		cout << "Nilai UTS : "; cin >> mhs[i].UTS;
		cout << "Nilai UAS : "; cin >> mhs[i].UAS;
		cout << endl;
	}
}

void ProsesData(Mahasiswa *mhs, int jumData)
{
	float nilai;
	for (int i = 0; i < jumData; i++)
	{
		nilai = (mhs[i].Tugas * 0.3) + (mhs[i].UTS * 0.3) + (mhs[i].UAS * 0.4);
		mhs[i].Ratarata = nilai;
		if (nilai > 85) mhs[i].Nilai = 'A';
		else if (nilai < 85 && nilai >= 75) mhs[i].Nilai = 'B';
		else if (nilai < 75 && nilai >= 60) mhs[i].Nilai = 'C';
		else if (nilai < 60 && nilai >= 50) mhs[i].Nilai = 'D';
		else if (nilai < 50) mhs[i].Nilai = 'E';
	}
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Cetak(Mahasiswa *mhs, int jumData)
{
	system("cls");
	cout << "---------------------------------------------------------------------------\n";
	cout << "No   Nim 	    Nama      Tugas   UTS     UAS     Rata-rata     Nilai\n";
	cout << "---------------------------------------------------------------------------\n";
	int y = 3;
	for (int i = 0; i < jumData; i++)
	{
		cout << mhs[i].No;
		gotoxy(5, y); cout << mhs[i].Nim;
		gotoxy(20, y); cout << mhs[i].Nama;
		gotoxy(30, y); cout << mhs[i].Tugas;
		gotoxy(38, y); cout << mhs[i].UTS;
		gotoxy(46, y); cout << mhs[i].UAS;
		gotoxy(54, y); cout << mhs[i].Ratarata;
		gotoxy(68, y); cout << mhs[i].Nilai << endl;
		y++;
	}
	cout << "---------------------------------------------------------------------------\n";
}

int main()
{
	Mahasiswa *mhs;
	int jumData;
	cout << "Masukkan jumlah data: ";
	cin >> jumData;
	mhs = new Mahasiswa[jumData];
	Input(mhs, jumData);
	ProsesData(mhs, jumData);
	Cetak(mhs, jumData);
	getch();
	return 0;
}












