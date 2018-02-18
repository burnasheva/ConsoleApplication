#include <stdio.h>
#include <conio.h>
#include "header/gotoxy-m.h"

int main() {

	char NK[1000][20], j[6], h[9], ju[12], p, NT[20], CL;
	float D;
	int JB[1000], K, J, H, JH, TJH, JD, JU, UK, P, T, R, M;

	printf("  // Program Kasir Toko Expendabros\n");
	printf("    1310171041\n");

	K = 0;
	M = 0;
	CL = 1;
	CL += 0;
	do {
		K++;
		TJH = 0;

		printf("   _________________________________________________\n");
		printf("  |                                                 |\n");
		printf("  | Struk belanja Toko Expendabros            %5d |\n", K);
		printf("  |                                                 |\n");

		printf("  | Nama konsumen:                                  |\n");

		gotoxy("")


		printf("  |                                                 |\n");
		printf("  | Jumlah barang = XXXXX                           |\n");
		printf("  |  _____________________________________________  |\n");
		printf("  | | Barang | Jumlah |    Harga    |    Total    | |\n");
		printf("  | |---------------------------------------------| |\n");
		printf("  | | XXXXXX | XXXXXX | RpXXXXXXXXX | RpXXXXXXXXX | |\n");
		printf("  | |---------------------------------------------| |\n");
		printf("  | |                         Total | RpXXXXXXXXX | |\n");
		printf("  | |_______________________________|_____________| |\n");
		printf("  |                                                 |\n");
		printf("  | &MSG                                            |\n");
		printf("  | &MSG                                            |\n");
		printf("  |                                                 |\n");
		printf("  | Total belanja    = RpXXXXXXXXXXXX               |\n");
		printf("  | Diskon           = RpXXXXXXXXXXXX               |\n");
		printf("  |                    ______________ _             |\n");
		printf("  | Total belanja      RpXXXXXXXXXXXX               |\n");
		printf("  |                                                 |\n");
		printf("  | Jumlah uang      = RpXXXXXXXXXXXX               |\n");
		printf("  | Jumlah kembalian = RpXXXXXXXXXXXX               |\n");
		printf("  |                                                 |\n");
		printf("  | Terima kasih! Selamat datang kembali            |\n");
		printf("  |_________________________________________________|\n");
		printf("\n");

		printf("  / Apakah ada pelanggan lagi?\n");
		printf("    (1 jika ya, 0 jika tidak)\n");
		printf("  $ X\n");

	} while (P != 0);

	printf("  / Total pendapatan  = RpXXXXXXXXXXXXXXX\n");
	printf("\n");
	printf("  / Rata-rata belanja = RpXXXXXXXXXXXXXXX\n");
	printf("\n");
	printf("  / Belanja tertinggi = RpXXXXXXXXXXXXXXX\n");
	printf("    atas nama XXXXXXXXXXXXXXXXXXXX\n");

	
	return 0;
}
