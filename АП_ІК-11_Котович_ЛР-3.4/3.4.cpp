// 3.4.cpp
// < Котович Вікторія >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 6
#include <iostream>
using namespace std;
int main()
{
	double x; 
	double y; 
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if (x >= 0 && y >= 0 && (x * x + y * y <= R * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	if (x <= 0 && y <= 0 && (x * x + y * y <= R * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
 return 0;
}


