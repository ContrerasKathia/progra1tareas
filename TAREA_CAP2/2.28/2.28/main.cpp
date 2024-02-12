#include <iostream>

using namespace std;


int main()
{
    int num;
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int r1;
    int r2;
    int r3;
    int r4;
    int r5;
    cout << "Ingrese un numero entero de 5 digitos: ";
    cin >> num;
    r1= num /10;
    n1= num%10;
    r2= r1 /10;
    n2= r1%10;
    r3= r2 /10;
    n3= r2%10;
    r4= r3 /10;
    n4= r3%10;
    n5= r4%10;
    cout<< "NUMERO SEPARADO EN DIGITOS:\n";
    cout << n5 <<" "<<n4<<" "<<n3<<" "<<n2<<" "<<n1 << endl;
   return 0;
}

