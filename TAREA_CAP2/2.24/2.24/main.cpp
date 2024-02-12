#include <iostream>

using namespace std;

int main()
{
    int num;
    float resul;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    resul=num%2;
    if (resul==0)
        cout << "ES PAR";
    else
        cout << "\nES IMPAR"<<endl;
    return 0;
}

