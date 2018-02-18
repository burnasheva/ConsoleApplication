#include<stdio.h>
#include<conio.h>
#include"gotoxy.h"

int i,j,ka,b;
Pola(int p , int q) {
	for(i=1;i<= p ; i++)
	{
		for(j=1;j<=q;j++)
		{
			gotoxy(ka,b);printf("...");

			ka=ka+5;
		}
		b=b+1; ka = 12;
	}
}

main() {
	int A[11][11],B[11][11],C[11][11],m,n;

	gotoxy(20,3);printf("DASAR PEMROGRAMAN DAN ALGORITMA  ");
	gotoxy(28,4);printf("PROGRAM MATRIKS");
	gotoxy(15,5);printf("Penjumlahan matriks A dan B dengan gotoxy");
	gotoxy(17,6);printf("=====================================");
	gotoxy(25,7);printf("Wafi Azmi Hartono");
	gotoxy(6,11);printf("Max Masukkan baris = "); scanf("%d",&m);
	gotoxy(6,13);printf("Max Masukkan kolom = "); scanf("%d",&n);
	gotoxy(6,15);printf("Penjumlahan matriks A dan B adalah C = A + B ");


	gotoxy(6,17);printf("Masukkan elemen matriks A:");

	b=19; ka=12;

	Pola(m,n);

	b=19; ka=12;
	for(i=1;i<= m ; i++)
	{
		for(j=1;j<=n;j++)
		{
			gotoxy(ka,b);printf("...");

			ka=ka+5;
		}
		b=b+1; ka = 12;
	}

	b=19; ka=12;
	for(i=1;i<= m ; i++)
	{
		for(j=1;j<=n;j++)
		{
			gotoxy(ka,b); scanf("%d",&A[i][j]);gotoxy(ka,b);printf("%3d", A[i][j]);
			ka=ka+5;
		}
		b=b+1; ka=12;
	}

	b++;
	gotoxy(6,b);printf("Masukkan elemen matriks B:");
	b++;

	b++;ka=12;
	for(i=1;i<= m ; i++)
	{
		for(j=1;j<=n;j++)
		{
			gotoxy(ka,b);printf("...");
			ka=ka+5;
		}
		b=b+1; ka =12;
	}

	b=b-m; ka=12;
	for(i=1;i<= m ; i++)
	{
		for(j=1;j<=n;j++)
		{
			gotoxy(ka,b); scanf("%d",&B[i][j]);gotoxy(ka,b);printf("%3d", B[i][j]);
			ka=ka+5;
		}
		b=b+1; ka=12;
	}

	b++;
	gotoxy(6,b);printf("Proses penjumlahan pada kedua matriks C = A + B ");
	gotoxy(6,b+1);printf("Hasil Penjumlahan dari kedua matriks A dan B tersebut :");
	b++;

	b++;
	b++;ka=12;
	for(i=1;i<= m ; i++)
	{
		for(j=1;j<=n;j++)
		{

			C[i][j] = A[i][j]+B[i][j];
			gotoxy(ka,b);printf("%4d",C[i][j]);
			ka=ka+8;
		}
		b=b+1; ka = 12;
	}

	
}
