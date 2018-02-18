#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int a, r, k, N, i, JD, JU, UK, H, J, TJH, JH, P;
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
        printf("\n          *NOTA BELANJA*");
        printf("\n\nJumlah jenis barang pembelian = "); scanf("%d", &N);
        for ( TJH = 0,i = 1; i <= N; i++)
        {
            printf("\n\nJumlah barang ke %d       = ",i); scanf("%d", &J);
            printf("Harga @biji              = Rp "); scanf("%d", &H);
            JH = J * H;
            printf("Jumlah harga barang ke %d = Rp %d", i, JH);
            printf("\n---------------------------------------");
            TJH += JH;
        }
        printf("\nTotal jumlah harga pembelian \n= Rp %d", TJH);
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

     return 0;
}
