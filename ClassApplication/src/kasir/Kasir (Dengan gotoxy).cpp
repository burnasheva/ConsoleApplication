#include<stdio.h>
#include<math.h>
#include<conio.h>
#include"gotoxy.h"


main()
{
    int brs,a, r, k, N, i, JD, JU, UK, H, J, TJH, JH, P;
    float R, T, M, D, JB[1000];


    printf("DASAR PEMROGRAMAN DAN ALGORITMA\n");
    printf("        Nota belanja\n");
    printf("    WAFI AZMI HARTONO\n");
    printf("     D4 ELEKTRO INDUSTRI B\n");
    printf("         1310171041\n");
    printf("================================\n\n");
    a = 0;
    T = 0;


    do
    {
        a++;
        D = 0;
        gotoxy(10,7);printf("*NOTA BELANJA*");
        gotoxy(2,9);printf("Jumlah jenis barang pembelian = "); scanf("%d", &N);
        gotoxy(5,11); printf("--------------------------------------------");
        gotoxy(5,12); printf("|No Barang| Jumlah |  Harga  | Jumlah harga |");
        gotoxy(5,13); printf("---------------------------------------------");

        brs =14;
        for(i=1; i<=N; i++)
        {
            gotoxy(5,brs); printf("|   %3d   |        |         |              |",i);
            brs++;
        }
         gotoxy(5,brs); printf("--------------------------------------------");

         brs =14;
        for ( TJH = 0,i = 1; i <= N; i++)
        {
            gotoxy(17,brs); scanf("%d", &J);gotoxy(17,brs);printf("%3d",J);
            gotoxy(26,brs); scanf("%d", &H);gotoxy(26,brs);printf("%6d",H);
            JH = J * H;
            gotoxy(36,brs);printf(" Rp %7d",JH);
            TJH += JH;
            brs++;
        }
        printf("\n\nTotal jumlah harga pembelian \n= Rp %d", TJH);
        printf("\n---------------------------------------");
        if (TJH > 50000)
        {
            printf("\n\nDAPAT DISKON 10%%");
            D = 0.1;
        }
        else
        {
            printf("\n\nTIDAK DAPAT DISKON");
        }
        JD = D * TJH;
        printf("\nJumah diskon             = Rp %d",JD);
        JB[a] = TJH - JD;
        printf("\nHarga yang harus dibayar = Rp %f", JB[a]);
        printf("\nBayar                    = Rp "); scanf("%d", &JU);
        UK = JU - JB[a];
        printf("Kembalian                = Rp %d", UK);

        printf("\n\n           *TERIMAKASIH*");
        printf("\n=================================");
        printf("\n\nApakah masih ada pelanggan ?\njika ya klik '1' jika tidak klik '2' = "); scanf("%d", &P);

        printf("jumlah pengunjung = %d\n",a);
        T = T + JB[a];
    } while (P == 1);
    printf("\nprogram selesai\n\n");
    M = JB[1];
    for(r=1;r<=a;r++)
    {
        if (M<JB[r])
        {
            M = JB[i];
        }
    }
    printf("Belanja tertinggi                   \n= Rp %f\n", M);
    printf("Total pemasukan hari ini            \n= Rp %f\n", T);
    R = T/a;
    printf("Rata-rata pembelian setiap konsumen \n= Rp %f", R);
    
}
