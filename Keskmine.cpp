#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int n;
int sum;

int main()  {
    ifstream cin("input.in");
    cin >> n;

    for(int i = 0; i < n; i ++) {
        int arv;
        cin >> arv;
        sum = sum + arv;
    }
    ofstream cout("output.out");
    cout << round(sum / n);
}