#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
    int k, N, i, JD, JB, JU, UK, H, J, TJH, JH, P;
    float D;


    printf("DASAR PEMROGRAMAN DAN ALGORITMA\n");
    printf("        Nota belanja\n");
    printf("    WAFI AZMI HARTONO\n");
    printf("     D4 ELEKTRO INDUSTRI B\n");
    printf("         1310171041\n");
    printf("================================\n\n");


    do
    {
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
        printf("\nTotal jumlah harga pembelian = Rp %d", TJH);
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
        JB = TJH - JD;
        printf("\nHarga yang harus dibayar = Rp %d", JB);
        printf("\nBayar                    = Rp "); scanf("%d", &JU);
        UK = JU - JB;
        printf("Kembalian                = Rp %d", UK);

        printf("\n\n           *TERIMAKASIH*");
        printf("\n=================================");
        printf("\n\nApakah masih ada pelanggan ? jika ya klik '1' jika tidak klik '2' = "); scanf("%d", &P);
    } while (P == 1);
    printf("program selesai");
    
}
