#include <stdio.h>
#include <conio.h>

int main1() {
    printf("SELAMAT DATANG\n");
    printf("      DI\n");
    printf("D4 ELIN B PENS\n");
    printf("Wafi Azmi Hartono");

    getch(); return 0;
}

int main2() {
    int R1=100, R2=300, R;

    R = R2 + R1;
    printf("PROGRAM RANGKAIAN LISTRIK DASAR\n");
    printf("PROGRAMER : WAFI AZMI HARTONO\n");
    printf("KELAS     : 1 D4 ELIN B\n");
    printf("NRP       : 1310171041\n");
    printf("====================================\n\n");
    printf("*NILAI TAHANAN PERTAMA (R1) = %d\n",R1);
    printf(" NILAI TAHANAN KEDUA (R2) = %d\n\n",R2);
    printf("*BILA KEDUA TAHANAN DIHUBUNGKAN SERI\n");
    printf(" MAKA TAHANAN PENGGANTI :\n");
    printf("R = R2 + R1\n");
    printf("  = %d + %d\n",R2,R1);
    printf("R = %d Ohm\n\n",R);
    printf("JADI TAHANAN PENGGANTI : %d Ohm",R);

    getch(); return 0;
}

int main3() {
    printf("PROGRAM RANGKAIAN LISTRIK DASAR\n");
    printf("PROGRAMER : WAFI AZMI HARTONO\n");
    printf("KELAS     : 1 D4 ELIN B\n");
    printf("NRP       : 1310171041\n");
    printf("====================================\n\n");
    float R1,R2,R;
    scanf("%f",&R1);
    scanf("%f",&R2);
    R=R1+R2;
    printf("R=%f",R);
    
    getch(); return 0;
}
