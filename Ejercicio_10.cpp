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

void mostrarNPrimos(int n)
{
    int count = 0
    int num = 2
    while(count < n)
    {
        if(esPrimo(num))
        {
            cout << num << " "
            count++
        }
        num++
    }
    cout << endl
}

int main()
{
    int n
    cout << "Ingrese la cantidad de números primos a mostrar: "
    cin >> n
    mostrarNPrimos(n)
}
