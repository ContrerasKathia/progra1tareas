#include <iostream>

using namespace std;

int main()
{
    int v=1;
    while (v<9)
    {
        if ((v % 2)== 0)
        {
            cout<<" ";
        }
        int f=1;
        while (f<9)
        {
            cout<<"* ";
            f++;
        }
        v=v+1;
        cout << endl;
    }
    return 0;
}
