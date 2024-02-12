#include <iostream>

using namespace std;
#define VALOR_PI 3.14159

int main()
{
    int radio;
    int b;
    int diametro;
    float circun;
    float area;
    float pi = VALOR_PI;
    cout << "Ingrese el radio de un circulo (entero): ";
    cin >> radio;
    diametro= 2 * radio;
    circun=2*radio*pi;
    area= (radio*radio)*pi;
    cout << "DIAMETRO: "<< diametro;
    cout << "\nCIRCUNFERENCIA: "<< circun;
    cout << "\nAREA: " << area<<endl;
    return 0;
}
