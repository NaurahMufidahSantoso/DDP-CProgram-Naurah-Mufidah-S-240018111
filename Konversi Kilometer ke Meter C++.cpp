#include <iostream>
using namespace std;

int main()
{
	cout << "##  Program C++ Konversi Kilometer ke Meter ##" << endl;
	cout << "==============================================" << endl;
	cout << endl;
	
	float kilometer, meter;
	
	cout << "Masukkan jarak dalam kilometer: ";
	cin >> kilometer;
	cout << endl;
	
	meter = kilometer * 1000;
	cout << kilometer << " km = " << meter << " m" << endl;
	
	return 0;
}
