#include <iostream>
#include <math.h>

using namespace std;
double CONSTANTE (int cant);
double CONSTANTE2 (int cant2, int potencia);

int main()
{
    int n=0;
    int factorial=1;
    int cant=0;
    int cant2=0;
    double e=0;
    double e2=0;
    int potencia=0;
    //INCISO A FACTORIAL DE UN NUMERO
    cout << "Ingrese un numero positivo entero" << endl;
    cin >> n;
    while (n != 0)
    {
        factorial=factorial*n;
        n=n-1;
    }
    cout << "El factorial es: " << factorial<<endl;
    cout <<"*************************************************************"<< endl;
    //INCISO B ESTIMA CONSTANTE e
    cout << "Ingrese la cantidad de terminos para calcular e" << endl;
    cin >> cant;
    e=CONSTANTE(cant);
    cout << "El valor de la constante e es: " << e <<endl;
    cout <<"*************************************************************"<< endl;
    //INCISO C ESTIMA CONSTANTE e con exponente
    cout << "Ingrese la cantidad de terminos para calcular e" << endl;
    cin >> cant2;
    cout << "Ingrese la potencia para la constante e: " << endl;
    cin >> potencia;
    e2=CONSTANTE2(cant2,potencia);
    cout << "El valor de la constante e con exponente "<<potencia<<" es: " << e2 <<endl;
    return 0;
}
double CONSTANTE(int cant)
{
    int num=1;
    int numero=0;
    double e=1;
    double factorial=1;
    while (num<=(cant-1))
    {
        numero=num;
        factorial=1;
        while (numero != 0)
        {
            factorial=factorial*numero;
            numero=numero-1;

        }
        e=(e+(1/factorial));
        num++;
    }

    return e;
}

double CONSTANTE2(int cant2, int potencia)
{

    int num=1;
    int numero=0;
    double e=1;
    double factorial=1;
    int p=0;
    if (cant2==1)
    {
        e=1;
    }
    else
    {
        while (num<=(cant2-1))
        {
            numero=num;
            factorial=1;
            while (numero != 0)
            {
                factorial=factorial*numero;
                numero=numero-1;

            }
            p=pow(potencia,num);
            e=(e+(p/factorial));
            num++;
        }
    }


    return e;
}
