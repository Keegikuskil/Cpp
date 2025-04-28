#include <iostream>
using namespace std;

int aasta;

int main()  {
    cout << "";
    cin >> aasta;
    if (aasta % 4 == 0 && aasta % 100 != 0 || aasta % 400 == 0) {
        cout << "Jah";
    }   else    {
        cout << "Ei";
    }
    return 0;
    
};