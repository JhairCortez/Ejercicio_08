#include<iostream>
using namespace std;

void contarParesImpares(int num) 
{
    int pares = 0
    int impares = 0
    while(num > 0)
        int digito = num % 10
        if(digito % 2 == 0)
            pares++
        else
            impares++
        num /= 10
    cout << "Pares: " << pares << endl
    cout << "Impares: " << impares << endl
}

int main() 
{
    int numero
    cout << "Ingrese un número: "
    cin >> numero
    contarParesImpares(numero)
}
