Proceso Ejercicio_29
    Definir n1, n2, n3, promedio Como Real
    Definir dif1, dif2, dif3 Como Real
    
    Escribir "Ingrese el primer número:"
    Leer n1
    Escribir "Ingrese el segundo número:"
    Leer n2
    Escribir "Ingrese el tercer número:"
    Leer n3
    
    promedio <- (n1 + n2 + n3) / 3
    Si promedio > 10 Entonces
        Escribir "El promedio es: ", promedio
    FinSi
    dif1 <- n1 - promedio
    dif2 <- n2 - promedio
    dif3 <- n3 - promedio
    Escribir "Diferencia del primer número con el promedio: ", dif1
    Escribir "Diferencia del segundo número con el promedio: ", dif2
    Escribir "Diferencia del tercer número con el promedio: ", dif3
	
FinProceso