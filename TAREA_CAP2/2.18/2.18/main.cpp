#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "Ingrese primer numero ENTERO: ";
    cin >> a;
    cout << "Ingrese segundo numero ENTERO: ";
    cin >> b;
    if (a>b)
        cout << "EL NUMERO "<<a<<" ES MAS GRANDE";
    else
        if (b>a)
            cout << "EL NUMERO "<<b<<" ES MAS GRANDE";
        else
        cout << "LOS NUMEROS SON IGUALES" << endl;

    return 0;
}

