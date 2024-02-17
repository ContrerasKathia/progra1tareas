Algoritmo SEUDOCODIGO_LIMITE_DE_CREDITO
	Mientras r1<> -1 Hacer
		Escribir "Introduzca el numero de cuenta (o -1 para salir): ";
		leer r1;
		Si r1<>-1 Entonces
			Escribir "Introduzca el saldo inicial: ";
			leer saldi;
			Escribir "Introduzca los cargos totales: ";
			leer ct;
			Escribir "Introduzca los creditos totales: ";
			leer crt;
			Escribir "Introduzca el limite de credito: ";
			leer limc;
			nuevosaldo=saldi+ct-crt;
			Si nuevosaldo>limc Entonces
				escribir "El nuevo saldo es ", nuevosaldo;
				Escribir "Cuenta: ",r1;
				Escribir "Limite de credito: ",limc;
				Escribir "Saldo: ", nuevosaldo;
				Escribir "SE EXCEDIO EL LIMITE DE SU CREDITO";
			SiNo
				Escribir "El nuevo saldo es ",nuevosaldo;
			Fin Si
		SiNo
			
		Fin Si
		
	Fin Mientras
	
FinAlgoritmo
