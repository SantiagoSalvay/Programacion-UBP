Proceso Ejercicio_17
    Definir num, suma Como Entero
    
    suma <- 0
    Escribir "Ingrese un número ( y un negativo para terminar):"
    Leer num
    Mientras num >= 0 Hacer
        suma <- suma + num
        Escribir "Ingrese otro número ( y un negativo para terminar):"
        Leer num
    FinMientras
    Escribir "La suma de los valores ingresados es: ", suma
	
FinProceso