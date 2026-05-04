#include<iostream>
using namespace std;
int Ejercicio_11() {
	float a = 0, b = 0, c = 0, promedio = 0, suma = 0;
	cout << "Ingrese los 3 numeros:" << endl;
	cin >> a >> b >> c;
	suma = a + b + c;
	promedio = suma / 3;
	if (promedio > 10)
	{
		cout << promedio;
	}
	else {
		cout << "El promedio no es mayor a 10." << endl;
	}
	cout << "Diferencia entre los numeros y el promedio" << endl << "1ro: " << a - promedio << endl << "2do: " << b - promedio << endl << "3ro: " << c - promedio;
	return 0;
}