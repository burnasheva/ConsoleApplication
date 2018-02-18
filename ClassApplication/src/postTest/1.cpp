#include <stdio.h>
#include <conio.h>

int maina() {

	char c;
	int pilihan;

	do {
		printf("Masukkan suatu karakter\n");
		scanf("%c", &c);

		if (c >= 'a' && c <= 'z') {
			printf("Karakter tesebut termasuk huruf non-kapital\n");
		} else {
			printf("Karakter tersebut termasuk huruf kapital\n");
		}

		printf("Apakah Anda ingin mengulangi program lagi? (1 untuk ya, 0 untuk tidak)\n");
		printf("\n");

		scanf("%d", &pilihan);

	} while (pilihan == 1);

	getch();
	return 0;
}
