#include<stdio.h>
#include<math.h>
#include<conio.h>
#include"gotoxy.h"

float f (float x) {
return (2*pow(x,2)-9*x-5);
}

int main(){
float xl, xr, xo, R;
int N, k, w, a;
w=0;
w++;
do {
    gotoxy(2,w++); printf ("PROGRAM REGULAFALSI");
    gotoxy(1,w++); printf ("MUHAMMAD RIZAL FANANI");
    gotoxy(7,w++); printf ("1310171033");
    gotoxy(0,w++); printf ("1 D4 TEKNIK ELEKTRO INDUSTRI (B)");
    gotoxy(0,w++); printf ("------------------------------------");
    do  {
        gotoxy(0,w++); printf ("Masukkan 2 perkiraan nilai akar persamaan f(x) = 2*x^2 - 9*x - 5 :");
        gotoxy(3,w++); printf ("Xl :"); scanf ("%f",&xl);
        gotoxy(3,w++); printf ("Xr :"); scanf ("%f",&xr);
        gotoxy(0,w++); printf ("Maka :");
        gotoxy(3,w++); printf ("f(Xl) = 2 * %f * %f - 9 * %f + 3",xl,xl,xl);
        gotoxy(3,w++); printf ("f(Xl) = %f ",f(xl));
        gotoxy(3,w++); printf ("f(Xr) = 2 * %f * %f - 9 * %f + 3",xr,xr,xr);
        gotoxy(3,w++); printf ("f(Xr) = %f ",f(xr));
        R = f(xl) * f(xr);
        gotoxy(3,w++); printf ("f(Xl)*f(Xr) = %f * %f = %f",f(xl),f(xr),R);
        if (R>=0){
        gotoxy(0,w++); printf("Antara Xl dan Xr tidak terdapat akar persamaan");
        }
    } while (R>=0);
    gotoxy(0,w++); printf("Antara Xl dan Xr terdapat akar persamaan");
    gotoxy(0,w++); printf("Input jumlah iterasi :"); scanf ("%d",&N);
    gotoxy(0,w++); printf(" ----------------------------------------------------------");
    gotoxy(0,w++); printf("|Iterasi|  Xl  |  Xr  |  Xo  |  f(Xl)  |  f(Xr)  |  f(Xo)  |");
    gotoxy(0,w++); printf(" ----------------------------------------------------------");
        for (k=1; k<=N; k++) {
            xo = (xl*f(xr)-xr*f(xl))/(f(xr)-f(xl));
            gotoxy(0,w++); printf("|   %d  |  %f  |  %f  |  %f  |   %f    |    %f   |    %f   |",k,xl,xr,xo,f(xl),f(xr),f(xo));
            gotoxy(0,w++); printf(" ----------------------------------------------------------");
            if (f(xo)==0) k=N;
            else if (f(xl)*f(xo)<0) xr=xo;
            else xl=xo;
        }
    gotoxy(3,w++); printf("Xo = %16.12f",xo);
    gotoxy(0,w++); printf("Apakah Xo merupakan akar dari fungsi persamaan f(x) = 2*X^2 - 9X - 5 ?");
        if (f(xo) == 0){
            gotoxy(0,w++); printf("Xo = %16.12f merupakan akar persamaan yang sesungguhnya");
        } else {
            gotoxy(0,w++); printf("Xo = %16.12f bukan merupakan akar persamaan yang sesungguhnya");
            gotoxy(0,w++); printf(" tetapi mendekati akar sesungguhnya karena nilai f(Xo) = 16.12f",f(xo));
        }
    gotoxy(0,w++); printf("Tekan 1/2 untuk memasukkan akar persamaan/keluar program");
    gotoxy(0,w++); printf("Silahkan ketik : "); scanf("%d",&a);
    w=0;
	system("cls");
   } while (a==1);
   printf("Program selesai");
   getch();
   return 0;
}
