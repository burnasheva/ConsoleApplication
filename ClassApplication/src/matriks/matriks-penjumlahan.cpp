#include<stdio.h>
#include<conio.h>
#include"gotoxy.h"


main() {
    int m, n, b, k, A[11][11], B[11][11], C[11][11] ;
    int brs, ko;
    gotoxy(17,3); printf("PROGRAM PENJUMLAHAN 2 MATRIKS");
    gotoxy(17,4); printf("=============================");
    gotoxy(19,5); printf("(IDE 1 versi 1 dasar)");

    gotoxy(8,9); printf("* Masukkan Ordo Matriks : ");
    gotoxy(16,10); printf("* Max Baris : ");scanf("%d",&m);
    gotoxy(16,11); printf("  Max Kolom : ");scanf("%d",&n);

    gotoxy(8,13); printf("* Entry Nilai Elemen Variabel Matrik I (A) :\n");

    brs = 15 ; ko = 20;
    for(b=1; b<=m; b++)
    {
       for(k=1; k<=n; k++)
       {
         gotoxy(ko,brs); printf("...");
        ko+=5;
       }
       brs++; ko = 20;
    }


    brs = 15 ; ko = 20;
    for(b=1; b<=m; b++)
    {
       for(k=1; k<=n; k++)
       {
         gotoxy(ko,brs); scanf("%d",&A[b][k]);        gotoxy(ko,brs); printf("%3d",A[b][k]);
        ko+=5;
       }
       brs++; ko = 20;
    }



    brs++;
    gotoxy(8,brs); printf("* Entry Nilai Elemen Variabel Matrik II (B) :\n");

    brs++ ; ko = 20;
    for(b=1; b<=m; b++)
    {
       for(k=1; k<=n; k++)
       {
         gotoxy(ko,brs); printf("...");
        ko+=5;
       }
       brs++; ko = 20;
    }


    brs-=m  ; ko = 20;
    for(b=1; b<=m; b++)
    {
       for(k=1; k<=n; k++)
       {
         gotoxy(ko,brs); scanf("%d",&B[b][k]);        gotoxy(ko,brs); printf("%3d",B[b][k]);
        ko+=5;
       }
       brs++; ko = 20;
    }



    for(b=1; b<=m; b++)
    {
       for(k=1; k<=n; k++)
       {
        C[b][k] = A[b][k] + B[b][k];
       }
    }

    brs++;
    gotoxy(8,brs); printf("* Hasil penjumlahan matriks C = A + B :\n");

    brs++  ; ko = 20;
    for(b=1; b<=m; b++)
    {
       for(k=1; k<=n; k++)
       {
         gotoxy(ko,brs); printf("%3d",C[b][k]);
        ko+=5;
       }
       brs++; ko = 20;
    }
    
}
