#include <iostream>
#include "Ejercicios.h"

int main(){
	int opcion = 0;
	while (opcion != 12) {
		std::cout << "Ingrese el numero del ejercicio para ejecutarlo e ingrese el numero 12 para terminar" << std::endl;
		std::cout << ">> ";

		switch (std::cin >> opcion, opcion) {

			case 5: 
				std::cout << "Contar regresivamente del 5 al 1 e imprimir '¡Despegue!' al finalizar" << std::endl;
				Ejercicio_5();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 6: 
				std::cout << "Leer 15 caracteres e imprimir la cantidad de veces que se ingreso la letra A" << std::endl;
				Ejercicio_6();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 7: 
				std::cout << "Leer alturas hasta que se ingrese una altura menor a 0.5. Calcular y mostrar el promedio de las alturas ingresadas (sin contar la altura menor a 0.5)" << std::endl;
				Ejercicio_7();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 8: 
				std::cout << "Leer edades hasta que se ingrese una edad superior a 100. Mostrar un mensaje de fin del programa al ingresar la edad superior a 100" << std::endl;
				Ejercicio_8();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 9: 
				std::cout << "Sumar todos los multiplos de 5 entre 1 y 100 y mostrar la suma total" << std::endl;
				Ejercicio_9();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 10: 
				std::cout << "Leer 10 notas y contar cuantas son mayores o iguales a 6" << std::endl;
				Ejercicio_10();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 11: 
				std::cout << "Ingresar tres numeros (pueden tener decimales). Calcular su promedio. Si el promedio es mayor a 10, mostrarlo. En todos los casos, calcular y mostrar las diferencias entre cada numero y el promedio. " << std::endl;
				Ejercicio_11();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			return 0;
		default:
			std::cout << "Opcion no valida. Por favor, ingrese un numero del 1 al 11." << std::endl;
			continue;
		} 
	}
}