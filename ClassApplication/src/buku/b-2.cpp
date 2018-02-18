#include <stdio.h>

int main242() {
	int a, b, c, d, hasil;

	printf("1310171041\n\n\n");

	printf("Masukkan nilai a b =\n");
	scanf("%d %d", &a, &b);
	printf("Masukkan nilai c d =\n");
	scanf("%d %d", &c, &d);
	printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);

	hasil = a - b;
	printf("\nHasil dari: a - b adalah %d\n", hasil);

	hasil = c + d;
	printf("Hasil dari: c + d adalah %d\n", hasil);

	hasil = b * c;
	printf("Hasil dari: b * c adalah %d\n", hasil);

	hasil = a / c;
	printf("Hasil dari: a / c adalah %d\n", hasil);

	hasil = a + b * c;
	printf("Hasil dari: a + b * c adalah %d\n", hasil);

	hasil = a * b + c * d;
	printf("Hasil dari: a * b + c * d adalah %d\n", hasil);

	return 0;
}

int main243() {
	int a = 12;
	int b = 8;
	int hasil;
	float c = 11.0;
	float d = 7.0;

	printf("1310171041\n\n\n");

	printf("6 + a / 5 * b = %d\n\n", 6 + a, 5 * b);
	printf("a / b * b = %d\n\n", a / b * b);
	printf("c / d * d = %f\n\n", c / d * d);
	printf("-a = %d\n", -a);

	return 0;
}

int main244() {
	int a = 14, b = 2, c = 3, d = 4;

	printf("1310171041\n\n\n");

	printf("a %% b = %d\n\n", a % b);
	printf("a %% c = %d\n\n", a % c);
	printf("a %% d = %d\n\n", a % d);
	printf("a / d * d + a %% d = %d\n", a / d * d + a % d);

	return 0;
}

int main245() {
	float p1 = 123.45678, p2;
	int b1, b2 = -150;

	printf("1310171041\n\n\n");

	b1 = p1;
	printf("%f disimpan ke int menghasilkan %d\n\n", p1, b1);

	p1 = b2;
	printf("%d disimpan ke float menghasilkan %f\n\n", b2, p1);

	p1 = b2 / 100;
	printf("%d dibagi 100 menghasilkan %f\n\n", b2, p1);

	p2 = b2 / 100.0;
	printf("%d dibagi 100 menghasilkan %f\n\n", b2, p2);

	return 0;
}

int main246() {
	int x, y, z;

	printf("1310171041\n\n\n");
	x = 80;
	y = x++;
	z = ++x;
	printf("Nilai dari x, y, z adalah %d, %d, %d\n\n", x, y, z);

	y = x--;
	z = --x;
	printf("Nilai dari x, y, z adalah %d, %d, %d", x, y, z);

	return 0;
}

int main247() {
	float x;

	printf("1310171041\n\n\n");
	
	printf("Masukkan nilai pecahan yang akan ditampilkan : ");
	scanf("%f", &x);

	printf("format e => %e\n", x);
	printf("format f => %f\n", x);
	printf("format g => %g\n", x);

	return 0;
}