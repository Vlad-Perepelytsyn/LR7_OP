#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
	// числа
	cout << showpos << '\t' << 4 << noshowpos << endl;
	cout << setw(15) << internal << fixed << setprecision(2) << -67.09124 << endl;
	cout << setw(10) << right << showpos << 235 << noshowpos << endl;
	cout << hex << 2209 << dec << endl;
	cout << fixed << setprecision(2) << -121.0 << endl;
	cout  << showpos << 1 << 24 << noshowpos << "\n" << endl;
	
	// текстові дані
	cout << "String1\n\tString2\n\t\tString3" << endl;
	cout << "\tString1\nString2" << endl;
	cout << "3";
	cout << '*';
	cout << "\tString\n1" << endl;
} 





