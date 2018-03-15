#include <stdio.h>
#include <conio.h>
#include <string>
#include "gotoxy-m.h"

char* format(unsigned long int);
void printBlank();
void resetCL();

int CL;

int main() {
	char NK[10000][20], NT[20];
	float D;
	unsigned long int H, J, JB[10000], JD, JH, JU, K, M, N, P, R, T, TJH, UK;

	printf("  / Program Kasir\n");
	printf("    1310171041\n");

	D = 0;
	K = 0;
	M = 0;
	T = 0;
	CL = 3;
	do {
		K++;
		TJH = 0;

		printf("   _________________________________________________________\n");
		printBlank();
		printf("  | Struk belanja Toko XXX                            %5d |\n", K);
		printBlank();
		printf("  | Nama konsumen:                                          |\n");
		CL += 4;
		gotoxy(20, CL);
		scanf("%s", &NK[K]);

		printBlank();
		printf("  | Jumlah barang =                                         |\n");
		CL += 2;
		gotoxy(21, CL);
		scanf("%d", &N);

		printf("  |  _____________________________________________________  |\n");
		printf("  | | Barang | Jumlah |      Harga      |      Total      | |\n");
		printf("  | |-----------------------------------------------------| |\n");
		CL += 3;

		for (unsigned int i = 1; i <= N; i++) {
			printf("  | | %6d |        | Rp              | Rp              | |\n", i);
			CL++;
			gotoxy(16, CL);
			scanf("%d", &J);
			gotoxy(16, CL);
			printf("%6d", J);

			gotoxy(27, CL);
			scanf("%d", &H);
			gotoxy(27, CL);
			printf("%13s", format(H));

			JH = J * H;
			TJH += JH;
			gotoxy(45, CL);
			printf("%13s", format(JH));
		}

		printf("  | |-----------------------------------------------------| |\n");
		printf("  | |                             Total | Rp              | |\n");
		CL += 2;
		gotoxy(45, CL);
		printf("%13s", format(TJH));

		printf("  | |___________________________________|_________________| |\n");
		printBlank();

		if (TJH > 50000) {
			D = 0.1f;
			printf("  | Selamat! Anda mendapatkan diskon 10%%!                  |\n");
			printBlank();
		}
		else {
			printf("  | Dapatkan diskon 10%%,                                   |\n");
			printf("  | dengan belanja lebih dari 50 ribu rupiah!               |\n");
		}

		printBlank();
		printf("  | Total            = Rp                                   |\n");
		CL += 6;
		gotoxy(26, CL);
		printf("%17s", format(TJH));

		JD = static_cast<int>(TJH * D);
		JB[K] = TJH - JD;

		printf("  | Diskon           = Rp                                   ||\n");
		CL++;
		gotoxy(26, CL);
		printf("%17s", format(JD));

		printf("  |                    ___________________ _                |\n");
		printf("  | Total belanja      Rp                                   |\n");
		CL += 2;
		gotoxy(26, CL);
		printf("%17s", format(JB[K]));

		printBlank();
		printf("  | Jumlah uang      = Rp                                   |\n");
		CL += 2;
		gotoxy(26, CL);
		scanf("%d", &JU);
		gotoxy(26, CL);
		printf("%17s", format(JU));

		UK = JU - JB[K];

		printf("  | Jumlah kembalian = Rp                                   |\n");
		CL++;
		gotoxy(26, CL);
		printf("%17s", format(UK));

		printBlank();
		printf("  | Terima kasih! Selamat datang kembali                    |\n");
		printf("  |_________________________________________________________|\n");
		printf("\n");

		printf("  / Apakah ada pelanggan lagi?\n");
		printf("    (1 jika ya, 0 jika tidak)\n");
		printf("  $ X\n");

		scanf("&d", &P);

		CL += 9;
		gotoxy(1, CL);

		T += JB[K];
		if (JB[K] > M) {
			M = JB[K];
			strcpy(NT, NK[K]);
		}

	} while (P != 0);

	R = T / K;

	printf("  / Total pendapatan  = Rp%s\n", format(T));
	printf("\n");
	printf("  / Rata-rata belanja = Rp%s\n", format(R));
	printf("\n");
	printf("  / Belanja tertinggi = Rp%s\n", format(M));
	printf("    atas nama %s\n", NT);

	return 0;
}

void printBlank() {
	printf("  |                                                         |\n");
}

char* format(unsigned long int in) {
	std::string inS = std::to_string(in);
	int l = static_cast<int>(inS.length());

	unsigned long int r = l / 3;
	if (r != 0) {
		if (l % 3 == 0) r--;
		for (unsigned long int i = 1; i <= r; i++) {
			inS.insert(l - 3 * i, ".");
		}
	}
	char* value = new char[inS.length() + 1];
	strcpy(value, inS.c_str());
	
	return (value);
}