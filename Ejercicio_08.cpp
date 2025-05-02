#include<iostream>
using namespace std;

int mcd(int a, int b)
{
    while(b != 0)
    {
        int r = a % b
        a = b
        b = r
    }
    return a
}

int main()
{
    int x, y
    cout << "Ingrese dos números: "
    cin >> x >> y
    cout << "El MCD es: " << mcd(x, y) << endl
}
