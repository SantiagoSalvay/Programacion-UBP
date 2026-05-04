#include<iostream> 

using namespace std;

int Ejercicio7() {
	int i, contador;
	char letra;
	contador = 0;
	for (i = 1; i <= 10; i++)
	{
		cout << "Ingrese un caracter: ";
		cin >> letra;
		if (letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u')
		{
			contador = contador + 1;
		}
	}
	cout << "La cantidad de vocales ingresadas es: " << contador ;
	return 0;

}