#include <iostream>
#include <string.h>

using namespace std;
#define NUMERO_EQUIPO 6
#define NUMERO_CLASIFICACION 4
#define MAX_GOL 10
#define MIN_GOL 0
#define MAXIMA_LONGITUD_CADENA 100


char alumnos[NUMERO_EQUIPO][MAXIMA_LONGITUD_CADENA];

int main()
{
    char equipo1;
    char equipo2;
    char equipo3;
    char equipo4;
    char equipo5;
    char equipo6;
    cout << "INGRESE EL NOMBRE DEL EQUIPO 1: "<< endl;
    cin >> equipo1;
    cout << "INGRESE EL NOMBRE DEL EQUIPO 2: "<< endl;
    cin >> equipo2;
    cout << "INGRESE EL NOMBRE DEL EQUIPO 3: "<< endl;
    cin >> equipo3;
    cout << "INGRESE EL NOMBRE DEL EQUIPO 4: "<< endl;
    cin >> equipo4;
    cout << "INGRESE EL NOMBRE DEL EQUIPO 5: "<< endl;
    cin >> equipo5;
    cout << "INGRESE EL NOMBRE DEL EQUIPO 6: "<< endl;
    cin >> equipo6;
    char alumnos[NUMERO_EQUIPO][MAXIMA_LONGITUD_CADENA] = {equipo1,equipo2,equipo3,equipo4,equipo5,equipo6};
    return 0;
}
