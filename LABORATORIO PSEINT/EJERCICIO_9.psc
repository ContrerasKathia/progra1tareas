Algoritmo EJERCICIO_9
	Escribir 'Ingrese un primer numero: ';
	Leer num1;
	Escribir 'Ingrese un segundo numero: ';
	Leer num2;
	suma <- (num1)+(num2);
	Si suma>0 Entonces
		Escribir 'La suma de ', num1, ' y ', num2, ' es ', suma, ' <---POSTIVO';
	SiNo
		Si suma<0 Entonces
			Escribir 'La suma de ', num1, ' y ', num2, ' es ', suma, ' <---NEGATIVO';
		SiNo
			Escribir 'La suma de ', num1, ' y ', num2, ' es ', suma, ' <---CERO';
		FinSi
	FinSi
FinAlgoritmo
