Algoritmo EJERCICIO_2
	Escribir 'Ingrese primer número (a): ';
	Leer a;
	Repetir
		Escribir 'Ingrese segundo número (b): ';
		Leer b;
		Si b=0 Entonces
			Escribir "ERROR... ingrese otro valor diferente de 0";
		SiNo
		Fin Si
	Hasta Que b<>0
	
	cociente <- a/b;
	residuo <- a mod b;
	Escribir "El cociente de " a, " / ", b, " es: ", cociente;
	Escribir "El residuo de " a, " / ", b, " es: ", residuo;
FinAlgoritmo
