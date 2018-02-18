#include<conio.h>
#include<stdio.h>

//4.4.1 Halaman 16
int main441() {
	int bil, absolut;

	printf("Masukkan bilangan bulat\n");
	scanf("%d", &bil);

	absolut = bil;
	if (bil < 0)
		absolut = -bil;

	printf("Nilai absolut dari %d adalah %d\n", bil, absolut);

	getch();
	return 0;
}

//4.4.2 Halaman 17
int main442() {
	int pembilang, penyebut, sisa;

	printf("Masukkan pembilang\n");
	scanf("%d", &pembilang);
	printf("Masukkan penyebut\n");
	scanf("%d", &penyebut);

	sisa = pembilang % penyebut;
	if (sisa != 0) {
		printf("%d tidak habis dibagi %d\n", pembilang, penyebut);
	} else {
		printf("%d habis dibagi %d\n", pembilang, penyebut);
	}

	getch();
	return 0;
}

//4.4.3 Halaman 17
int main443() {
	char c;

	printf("Masukkan suatu karakter\n");
	scanf("%c", &c);

	if (c >= 'a' && c <= 'z')
		printf("Karakter tesebut termasuk huruf non-kapital\n");
	else
		printf("Karakter tersebut termasuk huruf kapital\n");

	getch();
	return 0;
}

//4.4.6 Halaman 19
int main446() {
	int valid_operator = 1;
	char Operator;
	float bil1, bil2, hasil;

	printf("Masukkan dua bilangan dan sebuah operator dengan format:\n");
	printf("Bilangan1 operator bilangan2\n");
	scanf("%d %c %d", &bil1, &Operator, &bil2);

	if (Operator == '*') {
		hasil = bil1 * bil2;
	} else if (Operator == '/') {
		hasil = bil1 / bil2;
	} else if (Operator == '+') {
		hasil = bil1 + bil2;
	} else if (Operator == '-') {
		hasil = bil1 - bil2;
	} else {
		valid_operator = 0;
	}

	if (valid_operator) {
		printf("Hasil perhitungan:\n");
		printf("%f %c %f = %d\n", bil1, Operator, bil2, hasil);
	} else {
		printf("Operator salah!\n");
		printf("Gunakan operator * atau / atau + atau - saja\n");
	}

	getch();
	return 0;
}
