#include<iostream>
using namespace std;

bool esPalindromo(int num)
{
    int original = num
    int invertido = 0
    while(num > 0)
    {
        int digito = num % 10
        invertido = invertido * 10 + digito
        num /= 10
    }
    return original == invertido
}

int main()
{
    int numero
    cout << "Ingrese un número: "
    cin >> numero
    if(esPalindromo(numero))
        cout << numero << " es un número palíndromo" << endl
    else
        cout << numero << " no es un número palíndromo" << endl
}
