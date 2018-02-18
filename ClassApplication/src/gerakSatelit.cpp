#include<math.h>
#include<stdio.h>

int main() {
	const double g = 6.67408e-11;	//Konstanta gravitasi
	const double mBumi = 5.972e+24;	//Massa bumi
	const double pi = atan(1) * 4;	//Pi
	const double rBumi = 6.371e+6;	//Jari-jari bumi	

	double aSat, hSat, rOrbit, tSat, vSat;
	//aSat		Percepatan sentripetal satelit
	//hSat		Ketinggian satelit dari permukaan bumi
	//rOrbit	Jari-jari orbit satelit
	//tSat		Periode orbit satelit
	//vSat		Kecepatan orbit satelit

	printf("PROGRAM MENGHITUNG PERGERAKAN SATELIT\n\n");
	printf("Wafi Azmi Hartono | 1310171041\n");
	printf("Program ini berfungsi untuk menghitung kecepatan orbit,\n"
		"percepatan sentripetal, dan periode orbit sebuah satelit\n"
		"yang mengorbit bumi.\n\n");
	printf("Masukkan ketinggian satelit dari permukaan bumi dalam km\n");
	
	scanf("%lf", &hSat);
	hSat = hSat * 1000; //Mengubah satuan ketinggian satelit menjadi meter
	rOrbit = hSat + rBumi;
	vSat = sqrt(g * mBumi / rOrbit);
	aSat = g * mBumi / pow(rOrbit, 2);
	tSat = sqrt(4 * pow(pi, 2) * pow(rOrbit, 3) / g / mBumi);

	printf("Ketinggian satelit adalah %f kilometer dari permukaan bumi\n\n",
		hSat / 1000);
	printf("Kecepatan orbit satelit adalah %f m/s\n", vSat);
	printf("Percepatan sentripetal satelit adalah %f m/s^2\n", aSat);
	printf("Periode orbit satelit adalah %f detik atau %f jam\n", tSat,
		tSat / 3600);

	return 0;
}