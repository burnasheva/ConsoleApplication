#include<stdio.h>
#include<conio.h>

//3.4.1 Halaman 12
int main341() {
	int x, y;

	printf("Masukkan nilai x\n");
	scanf("%d", &x);
	printf("Masukkan nilai y\n");
	scanf("%d", &y);

	printf("Nilai %d < %d adalah %d\n", x, y, x < y);
	printf("Nilai %d > %d adalah %d\n", x, y, x > y);
	printf("Nilai %d == %d adalah %d\n", x, y, x == y);
	printf("Nilai %d <= %d adalah %d\n", x, y, x <= y);
	printf("Nilai %d >= %d adalah %d\n", x, y, x >= y);
	printf("Nilai %d != %d adalah %d\n", x, y, x != y);

	getch();
	return 0;
}

//3.4.2 halaman 13
int main342() {
	int x, y;

	printf("Masukkan nilai x\n");
	scanf("%d", &x);
	printf("Masukkan nilai y\n");
	scanf("%d", &y);

	printf("Nilai %d & %d adalah %d\n", x, y, x & y);
	printf("Nilai %d | %d adalah %d\n", x, y, x | y);
	printf("Nilai %d && %d adalah %d\n", x, y, x && y);
	printf("Nilai %d || %d adalah %d\n", x, y, x || y);
	printf("Nilai !0 adalah %d\n", !0);
	printf("Nilai !1 adalah %d\n", !1);
	printf("Nilai !%d adalah %d\n", x, !x);
	printf("Nilai !%d adalah %d\n", y, !y);

	getch();
	return 0;
}

//3.4.3 halaman 13
int main343() {
	int x, y, n, m;

	printf("Masukkan nilai x\n");
	scanf("%d", &x);
	printf("Masukkan nilai y\n");
	scanf("%d", &y);

	n = (x < 10) && (y > 10);
	m = (x > 10) || (y < 10);
	printf("Nilai dari (%d < 10) && (%d > 10) adalah %d\n", x, y, n);
	printf("Nilai dari (%d > 10) || (%d < 10) adalah %d\n", x, y, m);

	getch();
	return 0;
}

//3.4.4 halaman 14
int main34() {
	int a, b, x, y;

	printf("Masukkan nilai a\n");
	scanf("%d", &a);
	printf("Masukkan nilai b\n");
	scanf("%d", &b);
	printf("Masukkan nilai x\n");
	scanf("%d", &x);
	printf("Masukkan nilai y\n");
	scanf("%d", &y);

	printf("Nilai y dari y *= x adalah %d\n", y *= x);
	printf("Nilai y dari y /= x adalah %d\n", y /= x);
	printf("Nilai y dari y += x adalah %d\n", y += x);
	printf("Nilai y dari y -= x adalah %d\n", y -= x);
	printf("Nilai y dari y %%= x adalah %d\n", (y %= x));

	printf("Nilai y dari y *= (a + b) adalah %d", y *= (a + b));
	printf("Nilai y dari y /= (a - b) adalah %d", y /= (a - b));
	printf("Nilai y dari y += (a %% b) adalah %d", y += (a % b));
	printf("Nilai y dari y -= (a / b) adalah %d", y -= (a / b));

	getch();
	return 0;
}

//3.4.5 halaman 14
int main345() {
	int a, b, c, d;

	printf("Masukkan nilai a\n");
	scanf("%d", &a);
	printf("Masukkan nilai b\n");
	scanf("%d", &b);
	printf("Masukkan nilai c\n");
	scanf("%d", &c);
	printf("Masukkan nilai d\n");
	scanf("%d", &d);

	printf("Nilai a dibanding b adalah a lebih %s daripada b\n",
			(a > b ? "besar" : "kecil"));
	printf("Nilai c dibanding d adalah c lebih %s daripada d\n",
			(c > d ? "besar" : "kecil"));

	getch();
	return 0;
}
