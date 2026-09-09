Algoritmo promedio_notas
	Definir nota1, nota2, nota3, promedio Como Real
	
	Escribir "Ingrese nota 1:"
	Leer nota1
	
	Escribir "Ingrese nota 2:"
	Leer nota2
	
	Escribir "Ingrese nota 3:"
	Leer nota3
	
	promedio <- (nota1 + nota2 + nota3) / 3
	
	si promedio > 6 entonces
		Escribir "El promedio es: ", promedio
	finsi
	
FinAlgoritmo