#include <iostream>

using namespace std;

class Cuenta{
public:
    int saldoCuenta;
    //constructor
    Cuenta(int saldoInicial){
        if (saldoInicial>=0)
        {
            saldoCuenta=saldoInicial;
        }else
        {
            saldoCuenta=0;
            cout<<"El saldo es INVALIDO "<<endl;
        }

    }
    void abonarSaldo(){
        int saldo=-1;
        while (saldo<0)
        {
            cout<<"Ingrese monto entero Positivo a Abonar: "<<endl;
            cin>>saldo;
        }
        saldoCuenta+=saldo;
    }
    void cargarSaldo()
    {
        int saldo;
        cout<<"Ingrese monto entero a Cargar: "<<endl;
        cin>>saldo;
        if (saldoCuenta-saldo<0)
        {
            cout<<"EL MONTO A CARGAR EXCEDE EL SALDO DE LA CUENTA"<<endl;
        }else
        {
            saldoCuenta-=saldo;
        }
    }
    int obtenerSaldo() const
    {
        return saldoCuenta;
    }

};

int main()
{
    int saldoIni1=0,saldoIni2=0;
    cout<<"*****CUENTA no.1*****"<<endl;
    cout<<"INGRESE SALDO INICIAL DE CUENTA no.1 ";
    cin>>saldoIni1;
    Cuenta miCuentaBancaria1(saldoIni1);
    miCuentaBancaria1.abonarSaldo();
    miCuentaBancaria1.cargarSaldo();
    cout<<"*****CUENTA no.2*****"<<endl;
    cout<<"INGRESE SALDO INICIAL DE CUENTA no.2 ";
    cin>>saldoIni2;
    Cuenta miCuentaBancaria2(saldoIni2);
    miCuentaBancaria2.abonarSaldo();
    miCuentaBancaria2.cargarSaldo();
    cout<<"SALDO ACTUAL CUENTA No. 1: "<<miCuentaBancaria1.obtenerSaldo()<<endl<<"SALDO ACTUAL CUENTA No. 2: "<<miCuentaBancaria2.obtenerSaldo()<<endl;
    return 0;
}
