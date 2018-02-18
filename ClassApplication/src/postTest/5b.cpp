#include <stdio.h>
#include <math.h>
#include <conio.h>
//#include <clrscr.h>

int main() {
	float d, P, H = 3, J;
	int k;
	char c[20];

	printf("Banyaknya Perulangan?"); scanf("%d", &k);
	for(d = 1; d <= k; d++) {
		printf("J = 3/2 cos(P derajad)\n");
		printf("**********************\n");
		printf("Oleh: ");
		scanf("%s", c);

		printf("Nilai sudut P ke %.f = ", d);
		scanf("%f", &P);
		printf("Maka nilai P untuk %.f derajad adalah:", P);
		printf("J = 3/2 cos(%f derajad)\n", P);

	}
}
