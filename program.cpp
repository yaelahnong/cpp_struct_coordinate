// belajar pointer
// date: Saturday, 13 May 2023


/*

	pointer => variable yang nilainya merupapkan alamat dari variable lain, program akan lebih kompak / efisien jika menggunakan pointer.
	ngakses data dari alamat yang ditunjuk
*/


#include <stdio.h>
#include <iostream>

int main()
{
	int a;
	int *b;
	
	a = 3;
	b = &a; // B mencetak nilai dari address a
	if (*b == a) // cek nilai *b = a = 3
		printf("OK\n");
	// *Jika b = &a, maka &b = a, jadi *b = a = 3 dan jika = 3, maka *b = a
}
