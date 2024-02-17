#include <iostream>

using namespace std;

int main()
{
    cout << "HECHO POR KATHIA CONTRERAS" << endl;
    int r1;
    float saldi;
    float ct;
    float crt;
    float limc;
    float nuevosaldo;
    while (r1!= -1)
    {
        cout <<"Introduzca el numero de cuenta (o -1 para salir): "<<endl;
        cin >> r1;
        if (r1!=-1)
        {
            cout <<"Introduzca el saldo inicial:"<<endl;
            cin >> saldi;
            cout <<"Introduzca los cargos totales: "<<endl;
            cin >> ct;
            cout <<"Introduzca los creditos totales:"<<endl;
            cin >> crt;
            cout <<"Introduzca el limite de credito: "<<endl;
            cin >> limc;
            nuevosaldo=saldi+ct-crt;
            if (nuevosaldo>limc)
            {
                cout << "El nuevo saldo es "<< nuevosaldo<<endl;
				cout << "Cuenta: "<<r1<<endl;
				cout << "Limite de credito: "<<limc<<endl;
				cout << "Saldo: "<< nuevosaldo<<endl;
				cout << "SE EXCEDIO EL LIMITE DE SU CREDITO"<<endl;
            }else
                cout << "El nuevo saldo es "<< nuevosaldo<<endl;

        }

    }

    return 0;
}
