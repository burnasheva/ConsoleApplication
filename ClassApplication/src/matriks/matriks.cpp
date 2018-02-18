#include<stdio.h>
#include<conio.h>
#include"gotoxy.h"


main() {
    int m, n, b, k, A[11][11] ;
    printf("PROGRAM PENJUMLAHAN 2 MATRIKS\n");
    printf("=============================\n");
    printf("(IDE 1 versi 1 dasar)\n");

    printf("* Masukkan Ordo Matriks : \n");
    printf("* Max Baris : ");scanf("%d",&m);
    printf("  Max Kolom : ");scanf("%d",&n);

    printf("* Entry Nilai Elemen Variabel Matrik Pertama (A) :\n");



    for(b=1; b<=m; b++)
    { for(k=1; k<=n; k++)
     {
         printf("\t A[%d][%d] = ",b,k);scanf("%d",&A[b][k]);
     }
     printf("\n");
    }

}
