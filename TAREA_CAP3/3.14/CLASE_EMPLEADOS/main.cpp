#include <iostream>

using namespace std;

class Empleado{
public:
    string primerNombre;
    string apellidoPaterno;
    int salarioMensual;
    //constructor
    Empleado(string primerNom,string apellidoPat,int salarioIn){
        if (salarioIn>=0)
        {
            salarioMensual=salarioIn;
        }else
        {
            salarioMensual=0;
            cout<<"El salario es INVALIDO "<<endl;
        }
        apellidoPaterno=apellidoPat;
        primerNombre=primerNom;
    }
    void establecerSalario(){
        int salario=0;
        for (int i=1; i<=12;i++)
        {
            cout<<"Ingrese salario entero del mes "<<i<<" : ";
            cin>>salario;
            if (salario>=0)
            {
                salarioMensual+=salario;
            }else
            {
                salarioMensual=0;
                cout<<"El salario es INVALIDO "<<endl;
            }

        }
    }
    float aumentoSalario()
    {
        float salarioMensual1=salarioMensual;
        salarioMensual1+=(salarioMensual1/10);
        return salarioMensual1;
    }

    int obtenerSalario() const
    {
        return salarioMensual;
    }
    void nombre()
    {
        cout<<"EMPLEADO "<<primerNombre<<" "<<apellidoPaterno<<endl;
    }


};

int main()
{
    Empleado primerEmpleado("JUAN","PEREZ",0);
    primerEmpleado.nombre();
    primerEmpleado.establecerSalario();
    cout<<"TIENE UN SALARIO ANUAL ACTUAL DE : Q.  "<<primerEmpleado.obtenerSalario()<<endl;
    cout<<"TIENE UN SALARIO ANUAL CON AUMENTO DEL 10% : Q.  "<<primerEmpleado.aumentoSalario()<<endl;
    Empleado segundoEmpleado("RUT","LOPEZ",0);
    segundoEmpleado.nombre();
    segundoEmpleado.establecerSalario();
    cout<<"TIENE UN SALARIO ANUAL ACTUAL DE : Q.  "<<segundoEmpleado.obtenerSalario()<<endl;
    cout<<"TIENE UN SALARIO ANUAL CON AUMENTO DEL 10% : Q.  "<<segundoEmpleado.aumentoSalario()<<endl;
    return 0;
}
