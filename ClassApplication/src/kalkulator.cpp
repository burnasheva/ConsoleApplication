#include <stdio.h>

int main() {
	char Operator;
	float bil1, bil2, hasil;
	int validOperator = 1;

	printf("Kalkulator Sederhana\n\n");

	printf("Masukkan dua buah bilangan dengan sebuah operator dengan format:\n");
	printf("bilangan1 operator bilangan2\n\n");
	
	printf("Pilihan operator:\n");
	printf("    Penjumlahan +\n");
	printf("    Pengurangan -\n");
	printf("    Perkalian *\n");
	printf("    Pembagian /\n");
	printf("\n");
	scanf("%f %c %f", &bil1, &Operator, &bil2);

	switch (Operator) {
	case '+':
		hasil = bil1 + bil2;
		break;
	case '-':
		hasil = bil1 - bil2;
		break;
	case '*':
		hasil = bil1 * bil2;
		break;
	case '/':
		hasil = bil1 / bil2;
		break;
	default:
		validOperator = 0;
		break;
	}

	/*if (Operator == '+') {
		hasil = bil1 + bil2;
	} else if (Operator == '-') {
		hasil = bil1 - bil2;
	} else if (Operator == '*') {
		hasil = bil1 * bil2;
	} else if (Operator == '/') {
		hasil = bil1 / bil2;
	} else {
		validOperator = 0;
	}*/
	
	if (validOperator == 1) {
		printf("Hasil dari %.2f %c %.2f = %.2f", bil1, Operator, bil2, hasil);
	}
	else if (validOperator = 0) {
		printf("Operator salah, gunakan + atau - atau * atau /\n");
	}

	return 0;
}