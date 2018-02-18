#include <stdio.h>
#include <math.h>

float Luas(float);

int main() {
	int N;
	float jd, jl, LC;

	printf("Wafi Azmi Hartono | 1310171041\n");
	printf("Banyaknya cincin: ");
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		printf("Entry data cincin ke-%d:\n", i);
		printf("Jari-jari lingkaran luar = ");
		scanf("%f", &jl);

		printf("Jari-jari lingkaran dalam = ");
		scanf("%f", &jd);

		LC = Luas(jl) - Luas(jd);

		printf("Luas lingkaran luar = %.2f\n", Luas(jl));
		printf("Luas lingkaran dalam = %.2f\n", Luas(jd));
		printf("Luas cincin ke %d = %.2f cm^2\n\n", i, LC);
	}

	return 0;
}

float Luas(float r) {
	const float pi = 3.14159f;
	float L = pi * r * r;
	return L;
}