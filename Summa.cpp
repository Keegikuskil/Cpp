#include <iostream>
using namespace std;

int n;
int sum;

int main()  {
    cout << "";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int arv;
        cin >> arv;
        sum += arv;
    }
    cout << sum;
}