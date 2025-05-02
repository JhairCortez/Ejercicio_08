#include<iostream>
using namespace std;

int factorial(int n)
{
    int f = 1
    int i = 1
    while(i <= n)
    {
        f *= i
        i++
    }
    return f
}

int main()
{
    int n
    cout << "Ingrese un número: "
    cin >> n
    cout << "Factorial: " << factorial(n) << endl
}
