Proceso Ejercicio_15
    Definir i, contador Como Entero
    Definir letra Como Caracter
    
    contador <- 0
    Para i <- 1 Hasta 10 Hacer
        Escribir "Ingrese un caracter:"
        Leer letra
        Si letra = "a" O letra = "e" O letra = "i" O letra = "o" O letra = "u" Entonces
            contador <- contador + 1
        FinSi
    FinPara
    Escribir "La cantidad de vocales ingresadas es: ", contador
	
FinProceso