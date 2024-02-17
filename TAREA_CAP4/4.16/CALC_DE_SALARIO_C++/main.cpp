#include <iostream>

using namespace std;

int main()
{
    cout << "HECHO POR KATHIA CONTRERAS" << endl;
    int r1;
    int r2;
    float tarifa;
    float salario;
    while (r1!= -1)
    {
        cout <<"Introduzca las horas trabajadas (-1 para salir):  "<<endl;
        cin >> r1;
        if (r1!=-1)
        {
            cout <<"Introduzca la tarifa por horas del empleado: "<<endl;
            cin >> tarifa;
            if (r1>40)
            {
              r2=(((r1-40)*tarifa)/2);
            }
            salario=tarifa*r1+r2;
            cout <<"El Salario es:  "<<salario<<endl;
        }
    }
    return 0;
}
