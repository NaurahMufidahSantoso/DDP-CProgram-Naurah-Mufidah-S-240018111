#include <iostream>
using namespace std;

int main()
{
	cout << "##  Program C++ Menghitung Tarif Parkir  ##" << endl;
	cout << "===========================================" << endl;
	cout << endl;
	
	int jamMasuk, jamKeluar, totalJam, totalBiaya;
	
	cout << "Input jam masuk (format 24 jam): ";
	cin >> jamMasuk;
	
	cout << "Input jam keluar (format 24 jam): ";
	cin >> jamKeluar;
	cout << endl;
	
	// Hitung total waktu parkir
	totalJam = jamKeluar - jamMasuk;
	if (totalJam < 0){
	  // Dianggap parkir keluar keesokan harinya
	  totalJam = jamKeluar + 24 - jamMasuk;
	}
	
	// Hitung total biaya parkir
	totalBiaya = totalJam * 5000;
	
	cout << "Total biaya parkir:  Rp " << totalBiaya
		 << " (" << totalJam <<" jam)" << endl;
		 
	return 0;
}
