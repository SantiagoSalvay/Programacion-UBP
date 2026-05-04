#include <iostream>
#include "Ejercicios.h"

int main() {
	int opcion = 0;
	while (opcion != 13) {
		std::cout << std::endl <<"Ingrese el numero del ejercicio para ejecutarlo e ingrese el numero 13 para terminar" << std::endl;
		std::cout << ">> ";

		switch (std::cin >> opcion, opcion) {

			case 1:
				std::cout << "Dados los coeficientes de una ecuacion de segundo grado, determinar si las raices son reales. Ayuda: verificar el valor del discriminante. " << std::endl;
				Ejercicio_1();
				std::cout << std::endl<< "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 2:
				std::cout << "Ingresar por teclado cuatro variables i, j, k y l. Si i / j resulta igual a k / l, mostrar un mensaje indicando que los cocientes son iguales. En caso contrario, no dar mensaje. Recordar verificar que los divisores sean distintos de cero; si no lo son, indicar la imposibilidad de realizar las operaciones. " << std::endl;
				Ejercicio_2();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 3:
				std::cout << "Sabiendo la cantidad de bancos de un aula y la cantidad de alumnos inscriptos para un curso, determinar si alcanzan los bancos existentes. De no ser asi, informar ademas cuantos bancos seria necesario agregar." << std::endl;
				Ejercicio_3();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 4:
				std::cout << "Disenar un programa que, al ingresar por teclado el precio por kilo y la cantidad en kilos adquirida por un cliente de tres productos (seis variables), muestre el monto total en pesos correspondiente a la compra de cada producto y el total general de la compra. Si el total es superior a $100, aplicar un descuento del 10% y mostrar el nuevo monto. " << std::endl;
				Ejercicio_4();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 5:
				std::cout << "Disenar un programa que, ingresando por teclado la recaudacion mensual de un chofer de remis, resuelva: cuanto recauda en promedio por dia considerando un mes de 30 dias; cual es el sueldo del chofer sabiendo que si la recaudacion mensual supera los $1200 el sueldo es del 30% de la recaudacion y, si no lo supera, el sueldo es del 25%; y, ademas, si el promedio diario recaudado es menor que $80, mostrar un mensaje indicando que ese chofer posiblemente deba ser reemplazado. " << std::endl;
				Ejercicio_5();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 6:
				std::cout << "Cierto canal de television necesita un algoritmo que, recibiendo como dato los puntos de rating por hora y la cantidad de horas de duracio de tres programas, desarrolle las siguientes acciones: indicar que programas no cumplen la condicion de tener al menos 5 puntos de rating por hora; determinar los costos e ingresos totales de la empresa sabiendo que se produce un ingreso de $1,40 por punto de rating en concepto de publicidad y que cada hora de emision requiere un gasto de $0,75; calcular el resultado final (total de ingresos menos total de gastos) e informar si existen perdidas o ganancias. " << std::endl;
				Ejercicio_6();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 7:
				std::cout << "Conociendo las calificaciones de un alumno en una materia de programacion, indicar su condicion final. Deben considerarse cuatro calificaciones: primer parcial, segundo parcial, promedio de trabajos practicos y recuperatorio. Sera regular si tiene entre 4 y 8 en ambos parciales (o en uno de ellos y en el recuperatorio) y tambien en el promedio de trabajos practicos. Sera promocional si obtiene mas de 8 en los dos parciales (sin recuperatorio) y en el promedio de practica. Estara libre si obtiene menos de 4 en el promedio del practico, si no aprueba ambos parciales o si es aplazado en uno de los parciales y en el recuperatorio. " << std::endl;
				Ejercicio_7();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 8:
				std::cout << "Dadas tres longitudes y tres angulos, determinar si pueden formar un triangulo. Tener en cuenta que ningun lado puede ser mayor que la suma de los otros dos y que los tres angulos deben sumar 180 grados. " << std::endl;
				Ejercicio_8();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 9:
				std::cout << "De un postulante a un empleo que realizo un test de capacitacion se obtuvo la siguiente informacion: nombre del postulante, cantidad total de preguntas realizadas y cantidad de preguntas contestadas correctamente. Confeccionar un programa que lea los datos e informe el nivel del postulante segun el porcentaje de respuestas correctas: Nivel Superior si el porcentaje es mayor o igual al 90%; Nivel Medio si esta entre 75% y menos de 90%; Nivel Regular si esta entre 50% y menos de 75%; Fuera de Nivel si es menor al 50%. " << std::endl;
				Ejercicio_9();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 10:
				std::cout << "Ingresar por teclado los cuatro ultimos sueldos de un empleado de un comercio. Determinar el mayor de ellos y, si supera los 700 pesos, calcular un descuento del 2% y mostrar el monto descontado. " << std::endl;
				Ejercicio_10();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 11:
				std::cout << "Dados cuatro numeros distintos, mostrarlos ordenados de menor a mayor. " << std::endl;
				Ejercicio_11();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 12:
				std::cout << "Ingresar por teclado los valores de cuatro temperaturas registradas en distintos momentos del dia. Determinar el promedio de ellas. Mostrar aquellas temperaturas cuya diferencia con el promedio sea mayor a 10,5 grados. " << std::endl;
				Ejercicio_12();
				std::cout << std::endl << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 13:
				break;

			return 0;
		default:
			std::cout << "Opcion no valida. Por favor, ingrese un numero del 1 al 13." << std::endl;
			continue;
		}
	}
}
