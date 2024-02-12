#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int suma;
    int resta;
    int producto;
    int division;
    cout << "Ingrese primer numero: ";
    cin >> a;
    cout << "Ingrese segundo numero: ";
    cin >> b;
    suma=a+b;
    resta=a-b;
    producto=a*b;
    division=a/b;
    cout << "La suma es: " << suma;
    cout << "\nLa resta es: " << resta;
    cout << "\nEl producto es: " << producto;
    cout << "\nEl cociente es: " << division << endl;
    return 0;
}
