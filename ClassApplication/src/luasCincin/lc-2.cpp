#include<stdio.h>
#include<math.h>
#include<conio.h>

float Luas(float r);
int main()
{
    int N, i;
    float jl, jd, LC;

    printf("\n\n\t\tLUAS CINCIN");
    printf("\n\t\t============");
    printf("\n\t  Wafi Azmi Hartono");
    printf("\n\t\t1310171041");
    printf("\n\n\n*Banyaknya Cincin : ");scanf("%d", &N);

    for (i=1;i<=N;i++)
    {
        printf("\n*Entry data Cincin ke %d :",i);
        printf("\nJari-jari lingkaran luar = "); scanf("%f", &jl);
        printf("Jari-jari lingkaran dalam = "); scanf("%f", &jd);
        LC = Luas(jl) - Luas(jd);
        printf("\n\tLuas lingkaran luar = %f", Luas(jl));
        printf("\n\tLuas lingkaran dalam = %f", Luas(jd));
        printf("\n\t==>Luas Cincin ke %d = %8.1f cm2\n", i, LC);
    }

     return 0;
}

float Luas (float r)
{
    float PHI = 3.14,L;
    L = PHI * r * r;
    return(L);
}
