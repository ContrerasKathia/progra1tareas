Algoritmo Calculadora
	op <- 0;
	Escribir 'HECHO POR KATHIA CONTRERAS';
	Mientras op<>5 Hacer
		Escribir 'Que desea realizar? ';
		Escribir '1. Sumar';
		Escribir '2. Restar';
		Escribir '3. Multiplicar';
		Escribir '4. Dividir';
		Escribir '5. Salir';
		Leer op;
		Si op=1 Entonces
			Escribir 'Ingrese un primer valor: ';
			Leer primero;
			Escribir 'Ingrese segundo valor: ';
			Leer segundo;
			resultado <- primero+segundo;
			Escribir 'El resultado de la suma de: ', primero, '+', segundo, '=', resultado;
			Escribir 'Presione Enter...';
			Esperar Tecla;
			Limpiar Pantalla;
		SiNo
			Si op=2 Entonces
				Escribir 'Ingrese un primer valor: ';
				Leer primero;
				Escribir 'Ingrese segundo valor: ';
				Leer segundo;
				resultado <- primero-segundo;
				Escribir 'El resultado de la resta de: ', primero, '-', segundo, '=', resultado;
				Escribir 'Presione Enter...';
				Esperar Tecla;
				Limpiar Pantalla;
			SiNo
				Si op=3 Entonces
					Escribir 'Ingrese un primer valor: ';
					Leer primero;
					Escribir 'Ingrese segundo valor: ';
					Leer segundo;
					resultado <- primero*segundo;
					Escribir 'El resultado de la multiplicacion de: ', primero, '*', segundo, '=', resultado;
					Escribir 'Presione Enter...';
					Esperar Tecla;
					Limpiar Pantalla;
				SiNo
					Si op=4 Entonces
						Escribir 'Ingrese un primer valor: ';
						Leer primero;
						Repetir
							Escribir 'Ingrese segundo valor: ';
							Leer segundo;
							Si segundo=0 Entonces
								Escribir 'ERROR... ingrese otro valor diferente de 0';
							FinSi
						Hasta Que segundo<>0
						resultado <- primero/segundo;
						Escribir 'El resultado de la division de: ', primero, '/', segundo, '=', resultado;
						Escribir 'Presione Enter...';
						Esperar Tecla;
						Limpiar Pantalla;
					FinSi
				FinSi
			FinSi
		FinSi
	FinMientras
FinAlgoritmo
