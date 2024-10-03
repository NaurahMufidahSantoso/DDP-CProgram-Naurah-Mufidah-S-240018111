#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Menentukan Nama Bulan  ##" << endl;
  cout << "=========================================" << endl;
  cout << endl;
 
  int n;
 
  cout << "Input angka bulan (1-12): ";
  cin >> n;
 
  if ( n == 1) {
    cout << "Januari";
  }
  else if ( n == 2) {
    cout << "Februari";
  }
  else if ( n == 3) {
    cout << "Maret";
  }
  else if ( n == 4) {
    cout << "April";
  }
  else if ( n == 5) {
    cout << "Mei";
  }
  else if ( n == 6) {
    cout << "Juni";
  }
  else if ( n == 7) {
    cout << "Juli";
  }
  else if ( n == 8) {
    cout << "Agustus";
  }
  else if ( n == 9) {
    cout << "September";
  }
  else if ( n == 10) {
    cout << "Oktober";
  }
  else if ( n == 11) {
    cout << "November";
  }
  else if ( n == 12) {
    cout << "Desember";
  }
  else {
    cout << "Pilihan tidak tersedia";
  }
 
  cout << endl;
 
  return 0;
}
