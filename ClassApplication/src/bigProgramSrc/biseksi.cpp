#include <stdio.h>
#include <math.h>

float F(float);

int main() {

	float xl, xr, xo;
	int k;

	printf("Mencari akar dengan metode biseksi\n");
	printf("Persamaan: -2X^2-6X+8\n");

	do {
		printf("Masukkan dua titik (xl dan xr)\n");
		scanf("%f %f", &xl, &xr);
	} while (F(xl) * F(xr) > 0);

	 if (F(xl) == 0 && F(xr) == 0) {
		printf("%f dan %f adalah akar-akar dari persamaan\n", xl, xr);
		return 0;
	} else if (F(xl) == 0) {
		printf("%f adalah akar-akar dari persamaan\n", xl);
		return 0;
	} else if (F(xr) == 0) {
		printf("%f adalah akar-akar dari persamaan\n", xr);
		return 0;
	} 

	printf("Masukkan berapa kali program harus mencari akar\n");
	scanf("%d", &k);

	for (int i = 1; i <= k; i++) {
		xo = (xl + xr) / 2;
		printf("%d. xl = %f, xr = %f, xo = %f\n", i, xl, xr, xo);

		if (F(xo) == 0) {
			printf("%f adalah akar dari persamaan\n", xo);
			i = k++;
		} else {
			if (F(xl) * F(xo) > 0) {
				xl = xo;
			} else {
				xr = xo;
			}
		}
	}

	if (F(xo) == 0) {
		printf("Salah satu akar dari persamaan adalah %f\n", xo);
	} else {
		printf("Akar pendekatan dari persamaan adalah %f\n", xo);
	}

	return 0;
}

float F(float X) {
	float val = static_cast<float>((-2) * pow(X, 2) - 6 * X + 8);
	return val;
}