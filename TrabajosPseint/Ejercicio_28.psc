Proceso Ejercicio_28
    Definir i, contador Como Entero
    Definir nota Como Real
	
	
    contador <- 0
    Para i <- 1 Hasta 10 Hacer
        Escribir "Ingrese una nota:"
        Leer nota
        Si nota >= 6 Entonces
            contador <- contador + 1
        FinSi
    FinPara
    Escribir "Cantidad de notas mayores o iguales a 6: ", contador
	
FinProceso