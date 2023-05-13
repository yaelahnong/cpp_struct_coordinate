#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int ilham, *raka, amir, budi;
	
	ilham = 75;
	budi = 60;
	raka = &ilham; // Nilai variabel raka adalah merupakan alamat memori dari nilai ilham
	amir = ilham;
	raka = &budi;
	ilham = budi;
	cout << "Nilai Ilham adalah " << ilham << endl;
	cout << "Nilai Raka adalah " << raka << endl;
	cout << "Nilai Amir adalah " << amir << endl;
}
