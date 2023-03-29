#include <iostream>
using namespace std;

double rata(double basa, double mtk) {
	return (basa + mtk) / 2;
}

string status(double r, double m) {
	if (r >= 70 || m > 80) {
		return "Diterima";
	}

	else {
		return "Ditolak";
	}
}

int main() {
	string nama[7];
	int nilai_basa[7], nilai_mtk[7];
	int jumlah_diterima = 0, jumlah_ditolak = 0;

	for (int i = 0; i < 7; i++) {
		cout << "Nama Mahasiswa Ke- " << (i + 1) << ": ";
		cin >> nama[i];
		cout << "Masukkan nilai matematika mahasiswa ke- " << i + 1 << ": ";
		cin >> nilai_mtk[i];
		cout << "Masukkan nilai bahasa inggris mahasiswa ke- " << i + 1 << ": ";
		cin >> nilai_basa[i];

		double rata_nilai = rata(nilai_mtk[i], nilai_basa[i]);
		string status_mhs = status(rata(nilai_mtk[i], nilai_basa[i]), nilai_mtk[i]);

		if (status_mhs == "Diterima") {
			jumlah_diterima++;
		}
		else {
			jumlah_ditolak++;
		}
	}
	cout << "Jumlah mahasiswa diterima: " << jumlah_diterima << endl;
	cout << "Jumlah mahasiswa ditolak: " << jumlah_ditolak << endl;
	return 0;
}