#include "gotoxy-m.h"
#include <math.h>
#include <stdio.h>

float f(float);

int main() {

	float check, xl, xr, xo;
	//float xlt = 0, xrt = 0, xot = 0, fxlt = 0, fxrt = 0, fxot = 0;
	int k, p;

	do {
		system("CLS");

		printf("  Program Regula Falsi\n");
		printf("  Mencari akar dari suatu persamaan kuadrat menggunakan metode regula falsi.\n");
		printf("\n");
		printf("  Wafi Azmi Hartono / 1310171041\n");
		printf("  ---------------------------------------------------------------------\n");
		printf("\n");
		printf("  Persamaan kuadrat: -2X^2 - 6X + 8.\n");
		printf("\n");

		do {
			printf("  Masukkan perkiraan dua titik (xl dan xr) yang mengapit akar persamaan!\n");
			printf("  xl = ");
			scanf("%f", &xl);
			printf("  xr = ");
			scanf("%f", &xr);
			printf("\n");

			printf("  Pengecekan apakah xl dan xr mengapit akar:\n");
			printf("  f(xl) = -2(%.8f^2) - 6(%.8f) + 8\n", xl, xl);
			printf("        = %.8f\n", f(xl));
			printf("  f(xr) = -2(%.8f^2) - 6(%.8f) + 8\n", xr, xr);
			printf("        = %.8f\n", f(xr));
			check = f(xl) * f(xr);
			printf("  f(xl) * f(xr) = %.8f * %.8f\n", f(xl), f(xr));
			printf("                = %.8f\n", check);

			if (check < 0) {
				printf("  xl dan xr mengapit akar karena f(xl) * f(xr) kurang dari nol.\n");
			} else {
				printf("  xl dan xr tidak mengapit akar karena f(xl) * f(xr) lebih dari atau sama dengan nol.\n");
			}
			printf("\n");

		} while (check >= 0);

		printf("  Masukkan jumlah iterasi!\n");
		printf("  Iterasi = ");
		scanf("%d", &k);
		//printf("%d", k++);

		printf("   __________________________________________________________________________________________________________________\n");
		printf("  | Iterasi |       xl       |       xr       |       xo       |      f(xl)      |      f(xr)      |      f(xo)      |\n");
		printf("  |---------|----------------|----------------|----------------|-----------------|-----------------|-----------------|\n");
		for (int i = 1; i <= k; i++) {
			//xo = (xl + xr) / 2;
			//temp = (xl * f(xr) - xr * f(xl));
			//xo = temp / (f(xr) - f(xl));
			xo = (((xl * f(xr)) - (xr * f(xl))) / (f(xr) - f(xl)));
			
			//printf("%s\n", xot == xo ? "same" : "notsame");
			printf("  | %7d | %14.8f | %14.8f | %14.8f | %15.8f | %15.8f | %15.8f |\n", i, xl, xr, xo, f(xl), f(xr), f(xo));

			/*xlt = xl;
			xrt = xr;
			xot = xo;
			fxlt = f(xl);
			fxrt = f(xr);
			fxot = f(xo);*/

			if (f(xo) == 0) {
				//printf("STOP!\n");
				i = k;
			} else {
				if (f(xl) * f(xo) < 0) {
					xr = xo;
				} else {
					xl = xo;
				}
			}
		}
		printf("  |_________|________________|________________|________________|_________________|_________________|_________________|\n");
		printf("\n");

		printf("  xo terakhir = %.8f\n", xo);
		if (f(xo) == 0) {
			printf("  xo merupakan akar dari persamaan kuadrat -2X^2 - 6X + 8.\n");
		} else {
			printf("  xo merupakan akar pendekatan dari persamaan kuadrat -2X^2 - 6X + 8.\n");
		}
		printf("\n");

		printf("  Apakah Anda ingin mengulang program lagi? (1/2)\n  ");
		scanf("%d", &p);
	} while (p == 1);

	return 0;
}

float f(float x) {
	//float val = static_cast<float>((-2) * pow(x, 2) - (6 * x) + 8);
	//float val = ((-2) * pow(x, 2) - (6 * x) + 8);
	return (((-2) * (x * x)) - (6 * x) + 8);
}

//experimental
//int maian() {
//	float x = 7050;
//	printf("%18.8f", x);
//	system("CLS");
//	return 0;
//}