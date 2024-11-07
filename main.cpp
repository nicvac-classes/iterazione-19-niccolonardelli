#include <iostream>
using namespace std;

int main()
 {
    int n, d, nd;
    cout << "inserisci numero" << endl;
    cin >>n;
    nd = 0;
    for (d =1; d <=n ; d = d+1)
    {
        if(n%d==0)
        {
            cout << d << " è divisore di " << n << endl;
            nd = nd + 1;
        }
        else 
        {

        }
    }
    cout << n << " ha " << nd << " divisori." << endl;
    if (nd ==2)
    {
        cout << n << " è un numero primo" << endl;
    }
    else
    {
        cout << n << " non è un numero primo" << endl;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
