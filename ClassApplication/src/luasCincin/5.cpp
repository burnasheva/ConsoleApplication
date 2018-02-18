#include<stdio.h>
#include<conio.h>

float Luas();
int k;
main()

{
    int N, i;
    float LC;
    k = 1;

    printf("\n\n\t\tLUAS CINCIN");
    printf("\n\t\t============");
    printf("\n\t  Wafi Azmi Hartono");
    printf("\n\t\t1310171041");
    printf("\n\n\n*Banyaknya Cincin : ");scanf("%d", &N);

    for (i=1;i<=N;i++)
    {
        printf("\n*Entry data Cincin ke %d :\n",i);
        LC = Luas() - Luas();
        printf("\n\tLuas lingkaran luar = %f", Luas());
        printf("\n\tLuas lingkaran Dalam = %f", Luas());
        printf("\n\t==>Luas Cincin ke %d = %8.1f cm2\n", i, LC);
    }
}

float Luas ()
{
    float PHI = 3.14, L, r;
    if(k%2 != 0)
    printf("\nJari-jari lingkaran Luar = ");
    else
    printf("\nJari-jari lingkaran Dalam = ");

    scanf("%f", &r);
    L = PHI * r * r;
    k++;
    return(L);
}
