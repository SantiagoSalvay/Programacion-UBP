#include<iostream>
#include<cmath>
using namespace std;

int Ejercicio_1() {
	int discriminante = 0, a = 0, b = 0, c = 0;
	cout << "Ingrese el coeficiente a:";
	cin >> a;
	cout << "Ingrese el coeficiente b:";
	cin >> b;
	cout << "Ingrese el coeficiente c:";
	cin >> c;
	discriminante = pow(b, 2) - 4 * a * c;

	if (discriminante < 0)
	{
		cout << "Las raices son imaginarias";
	}
	else
	{
		cout << "Las raices son reales";
	}
	return 0;
}