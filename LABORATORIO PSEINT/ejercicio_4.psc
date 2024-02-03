Algoritmo ejercicio_4
	dia <- 1;
	acumula <- 0;
	Repetir
		Escribir 'Ingrese salario del dia ', dia, ':';
		Leer salario;
		acumula <- acumula+salario;
		dia <- dia+1;
	Hasta Que dia>7
	Escribir 'El salario Semanal es de: Q.', acumula;
FinAlgoritmo
