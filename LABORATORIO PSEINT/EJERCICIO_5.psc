Algoritmo EJERCICIO_5
	Repetir
		Escribir 'Cuantos numeros desea ingresar? ';
		Leer cantidad;
		Si cantidad=0 Entonces
			Escribir 'ERROR... ingrese otro valor diferente de 0';
		FinSi
	Hasta Que cantidad<>0
	i <- 0;
	acu <- 0;
	Mientras i<cantidad Hacer
		Escribir 'Ingrese numero: ';
		Leer num;
		acu <- acu+num;
		i <- i+1;
	FinMientras
	prom <- acu/cantidad;
	Escribir 'El promedio es: ', prom;
FinAlgoritmo
