#include <stdio.h>

//5.4.4 Halaman 24
int main544() {
	int hitung, hasil;

	hitung = hasil = 1;
	while (hitung <= 10) {
		hasil *= hitung;
		printf("%3d %5d\n", hitung, hasil);
		++hitung;
	}
	
	return 0;
}

//5.4.5 Halaman 24
int main545() {
	int bil1, bil2, sisa;

	printf("Masukkan bilangan bulat positif pertama\n");
	scanf("%d", &bil1);
	printf("Masukkan bilangan bulat positif kedua\n");
	scanf("%d", &bil2);

	while (bil2 != 0) {
		sisa = bil1 % bil2;
		bil1 = bil2;
		bil2 = sisa;
	}
	printf("Pembagi bersama terbaik dari keduanya adalah %d", bil1);
	
	return 0;
}

//5.4.6 Halaman 25
int main546() {
	int hitung, hasil;

	hitung = 1;
	hasil = 0;
	do {
		hasil += hitung;
		printf("%3d %5d\n", hitung, hasil);
		++hitung;
	} while (hitung <= 10);
	
	return 0;
}