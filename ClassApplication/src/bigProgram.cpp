#include <stdio.h>

void programAkar();
void programIntegrasi();
void programSimultan();
void programInterpolasi();
void programRegresi();

int pilihan;

int main() {
	printf("Menu Utama\n");
	printf("  1. Akar Persamaan Non-linear\n");
	printf("  2. Integrasi Numerik\n");
	printf("  3. Persamaan Simultan\n");
	printf("  4. Interpolasi\n");
	printf("  5. Regresi\n");
	printf("  6. Keluar\n");

	printf("Masukkan nomor program yang diinginkan\n");
	scanf("%d", &pilihan);

	switch (pilihan) {
	case 1: programAkar();
		break;
	case 2: programIntegrasi();
		break;
	case 3: programSimultan();
		break;
	case 4: programInterpolasi();
		break;
	case 5: programRegresi();
		break;
	case 6: printf("Keluar\n");
		break;
	default: printf("Pilihan menu tidak tersedia\n");
		break;
	}

	return 0;
}

void programAkar() {
	printf("Program akar dijalankan\n");
	printf("Under construction\n");
}

void programIntegrasi(){
	printf("Sub-program Integrasi Numerik\n");
	printf("  1. Metode Trapezoidal\n");
	printf("  2. Metode Simson 1/3\n");
	printf("  3. Metode Simson 3/8\n");
	printf("  4. Keluar\n");

	printf("Masukkan nomor program yang diinginkan\n");
	scanf("%d", &pilihan);

	switch (pilihan) {
	case 1: 1();
		break;
	case 2: 2();
		break;
	case 3: 3();
		break;
	case 4: 
		printf("Keluar\n");
		main();
		break;
	default: printf("Pilihan menu tidak tersedia\n");
		break;
	}
}

void programSimultan() {
	printf("Program simultan dijalankan\n");
	printf("Under construction\n");
}

void programInterpolasi() {
	printf("Program interpolasi dijalankan\n");
	printf("Under construction\n");
}

void programRegresi() {
	printf("Program regresi dijalankan\n");
	printf("Under construction\n");
}