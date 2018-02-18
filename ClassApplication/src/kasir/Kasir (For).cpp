

int mainpK1() {
	int JK, N, J, H, JH, TJH, JD, JB, JU, UK;
	float D;

	cout << "Dasar Pemrograman dan Algoritma\n";
	cout << "Program Nota Belanja\n\n";
	cout << "Wafi Azmi Hartono\n";
	cout << "1310171041\n";
	cout << "1 D4 Teknik Elektro Industri B\n";
	cout << "---------------------------------------\n\n";

	cout << "Jumlah konsumen = "; cin >> JK; cout << "\n";

	for (int i=1; i<=JK; i++) {
		TJH=0;

		cout << "NOTA BELANJA KONSUMEN " << i << "\n";
		cout << "---------------------------------------\n\n";
		cout << "Jumlah jenis barang yang dibeli = "; cin >> N; cout << "\n";

		for (int j=1; j<=N; j++) {
			cout << "Jumlah barang ke-" << j << " = "; cin >> J;
			cout << "Harga barang ke-" << j << " = Rp"; cin >> H;
			JH=J*H;
			TJH+=JH;
			cout << "Total harga barang ke-" << j << " = Rp" << JH << "\n\n";
		}

		cout << "Total harga = Rp" << TJH << "\n";

		if(TJH>50000) {
			D=0.1;
			cout << "Selamat, Anda mendapatkan diskon 10%!\n";
		} else {
			cout << "Dapatkan diskon 10% dengan belanja lebih dari Rp50.000!\n\n";
		}

		JD=D*TJH;
		JB=TJH-JD;

		cout << "Uang yang dibayar = Rp"; cin >> JU; cout << "\n\n";
		UK=JU-JB;

		cout << "Total belanja = Rp" << TJH << "\n";
		cout << "Diskon        = Rp" << JD << "\n";
		cout << "Total biaya   = Rp" << JB << "\n";
		cout << "Uang bayar    = Rp" << JU << "\n";
		cout << "Uang kembalian= Rp" << UK << "\n\n";

		cout << "TERIMA KASIH\n";
		cout << "---------------------------------------\n\n";

	}

	return 0;

}
