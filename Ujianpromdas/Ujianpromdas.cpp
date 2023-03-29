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