Algoritmo SEUDOCODIGO_CALC_DE_SALARIO
	Mientras r1<> -1 Hacer
		Escribir "Introduzca las horas trabajadas (-1 para salir): ";
		leer r1;
		Si r1<>-1 Entonces
			Escribir "Introduzca la tarifa por horas del empleado: ";
			leer tarifa;
			Si r1>40 Entonces
				r2=((r1-40)/2)*tarifa;
			SiNo
				r2=0;
			Fin Si
			salario=tarifa*r1+r2;
			Escribir "El salario es: ",salario;
		SiNo
			
		Fin Si
		
	Fin Mientras
	
FinAlgoritmo
