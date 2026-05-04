#include <iostream>
#include "Ejercicios.h"

int main() {
	int opcion = 0;
	while (opcion != 11){
		std::cout << "Ingrese el numero del ejercicio para ejecutarlo e ingrese el numero 11 para terminar" << std::endl;
		
		switch (std::cin >> opcion, opcion) {
			case 1: 
				std::cout << "Mostrar los numeros del 1 al 10 utilizando un ciclo. " << std::endl;
				Ejercicio1(); break;
			case 2: 
				std::cout << "Leer un numero N e imprimir la suma de los primeros N numeros naturales. " << std::endl;
				Ejercicio2(); break;
			case 3: 
				std::cout << "Leer un numero e imprimir su tabla de multiplicar del 1 al 10. " << std::endl;
				Ejercicio3(); break;
			case 4: 
				std::cout << "Mostrar los numeros del 10 al 1 en orden descendente." << std::endl;
				Ejercicio4(); break;
			case 5:
				std::cout << "Mostrar los primeros 10 numeros pares." << std::endl;
				Ejercicio5(); break;
			case 6: 
				std::cout << "Leer 5 edades e informar el promedio." << std::endl;
				Ejercicio6(); break;
			case 7: 
				std::cout << "Leer 10 caracteres e informar cuantas vocales se ingresaron." << std::endl;
				Ejercicio7(); break;
			case 8: 
				std::cout << "Leer 5 nombres e imprimirlos uno por uno." << std::endl;
				Ejercicio8(); break;
			case 9: 
				std::cout << "Leer numeros hasta que el usuario ingrese un valor negativo.Mostrar la suma de los valores validos ingresados." << std::endl;
				Ejercicio9(); break;
			case 10: 
				std::cout << "Solicitar una clave al usuario hasta que la ingrese correctamente." << std::endl;
				Ejercicio10(); break;
			case 11: break;
			default:
				std::cout << "Opcion no valida. Por favor, ingrese un numero del 1 al 10." << std::endl;
				continue;
			
		}
		
	}
}
