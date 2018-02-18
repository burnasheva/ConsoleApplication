#include <stdio.h>
#include <conio.h>

float D;

float P(float);

int main() {
	float E;
	int F;

	scanf("%i", &F);
	if (F % 2 != 0) {
		E = P(F - 3);
		printf("%f", E);
	} else {
		E = P(2 * F);
		printf("%f", E);
	}
	printf("%f", D);

	getch();
	return 0;
}

float P(float k) {
	float C;

	D = 4 - k;
	if (D < 0) {
		D *= -1;
	}
	C = ((D + 3) / 2) - 7;

	return C;
}
