#include <iostream>
using namespace std;
 
int main() {
  cout << "##  Program C++ Tabel Perkalian ##" << endl;
  cout << "==================================" << endl;
  cout << endl;
 
  int angka;
  cout << "Masukkan angka: ";
  cin >> angka;
  cout << endl;
 
  cout << "Tabel perkalian angka " << angka << ":" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << angka << " * " << i << " = " << angka * i << endl;
  }
 
  return 0;
}
