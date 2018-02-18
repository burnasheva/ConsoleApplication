#include <stdio.h>
#include <conio.h>
#include <math.h>

float Luas();
int k;

int main() {
	int N;
	float LC;
	k = 1;

	printf("Wafi Azmi Hartono | 1310171041\n");
	printf("Banyaknya cincin: ");
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		printf("Entry data cincin ke-%d:\n", i);
		LC = Luas() - Luas();
		printf("Luas lingkaran luar = %.2f cm^2\n", Luas());
		printf("Luas lingkaran Dalam = %.2f cm^2\n", Luas());
		printf("Luas cincin ke-%d = %.2f cm^2\n", i, LC);
	}

	return 0;
}

float Luas() {
	const float pi = 3.14159f;
	float L, r;
	if (k % 2 != 0) printf("Jari-jari lingkaran Luar = ");
	else printf("Jari-jari lingkaran Dalam = ");

	scanf("%f", &r);
	L = pi * r * r;
	k++;
	return L;
}