#ifndef FACULTADES_H
#define FACULTADES_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
//Declaraciòn de Constantes
#define NUMERO_ALUMNOS 5
#define NUMERO_MATERIAS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100
//Declaraciòn de Prototipos de Funciòn
void llamaCiclo();   //Funciòn que controla el Ciclo comparativo de datos por todas las facultades
int busquedaAleatorios(int minimo, int maximo); //Funciòn que permite obtener valores aleatorios en las notas de cada alumno
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]); //Funciòn que permite asignar a cada alumno las notas aleatorios
void imprimirMatrizLinea(); //Funciòn que apoya el despliegue de titulos en el comparativo de facultades
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad);


#endif // FACULTADES_H
