#include <iostream>
#include <iomanip>
#include <windows.h>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ����� ������: S=3.14*r*r; �������� ������: P = 2*3.14*r; r - �����

	/*
	int r = 5;
	double S, P;
	S = 3.14* r * r;
	P = 2 * 3.14 * r;
	cout << "S=" << S << '\t' << "P=" << P << endl;
	*/

	/*
	int r;
	double S, P;
	cout << "������ ����� ������ r:";
	cin >> r;
	S = 3.14 * r * r;
	P = 2 * 3.14 * r;
	cout << "S=" << S << '\t' << "P=" << P << endl;
	*/
	
	/*
	int r = 5;
	double S, P;
	S = 3.14 * r * r;
	P = 2 * 3.14 * r;
	printf("S = %lf P = %lf", S, P);
	*/

	
	int r;
	double S, P;
	printf("������ ����� ������ r:");
	scanf_s("%d", &r);
	S = 3.14 * r * r;
	P = 2 * 3.14 * r;
	printf("S = %lf P = %lf", S, P);
	

	return 0;


}