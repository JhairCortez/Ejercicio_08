#include<iostream>
using namespace std;

bool esPrimo(int n)
{
    if(n <= 1)
        return false
    int i = 2
    while(i * i <= n)
    {
        if(n % i == 0)
            return false
        i++
    }
    return true
}

int main()
{
    int n
    cout << "Ingrese un número: "
    cin >> n
    if(esPrimo(n))
        cout << n << " es primo" << endl
    else
        cout << n << " no es primo" << endl
}
