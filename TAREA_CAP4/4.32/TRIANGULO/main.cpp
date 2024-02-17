#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    cout << "ingrese primer valor" << endl;
    cin >> a;
    cout << "ingrese segundo valor" << endl;
    cin >> b;
    cout << "ingrese tercer valor" << endl;
    cin >> c;
    if (a<(b+c))
        cout<<" SI ES UN TRIANGULO"<< endl;
    else
    {
        if (b<(a+c))
            cout<<" SI ES UN TRIANGULO"<< endl;
        else
        {
            if(c<(a+b))
                cout<<" SI ES UN TRIANGULO"<< endl;
            else
                cout<< "NO ES UN TRIANGULO"<< endl;
        }
    }
    return 0;
}
