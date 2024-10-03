#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Menghitung Keliling Segitiga ##" << endl;
  cout << "===============================================" << endl;
  cout << endl;
 
  float alas, tinggi, sisi_miring, keliling;
 
  cout << "Input alas segitiga: ";
  cin >> alas;
  cout << "Input tinggi segitiga: ";
  cin >> tinggi;
  cout << endl;
 
  sisi_miring = sqrt((alas*alas) + (tinggi*tinggi));
  keliling = alas + tinggi + sisi_miring;
 
  cout << "Panjang sisi miring = " << sisi_miring << endl;
  cout << "Keliling segitiga = " << keliling << endl;
 
  return 0;
}
