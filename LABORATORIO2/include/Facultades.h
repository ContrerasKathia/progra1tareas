#ifndef FACULTADES_H
#define FACULTADES_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
//Declaraci�n de Constantes
#define NUMERO_ALUMNOS 5
#define NUMERO_MATERIAS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100
//Declaraci�n de Prototipos de Funci�n
void llamaCiclo();   //Funci�n que controla el Ciclo comparativo de datos por todas las facultades
int busquedaAleatorios(int minimo, int maximo); //Funci�n que permite obtener valores aleatorios en las notas de cada alumno
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]); //Funci�n que permite asignar a cada alumno las notas aleatorios
void imprimirMatrizLinea(); //Funci�n que apoya el despliegue de titulos en el comparativo de facultades
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad);


#endif // FACULTADES_H
