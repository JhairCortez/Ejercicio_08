#include <iostream>
using namespace std;

int leerNumero()
{
    int n
    cout << "Ingrese un número natural N: "
    cin >> n
    return n
}

bool esPerfecto(int numero)
{
    int suma = 0
    for (int i = 1; i < numero; i++)
        if (numero % i == 0)
            suma += i
    return suma == numero
}

void mostrarPerfectos(int n)
{
    cout << "Números perfectos entre 1 y " << n << ":" << endl
    for (int i = 1; i <= n; i++)
        if (esPerfecto(i))
            cout << i << endl
}

int main()
{
    int n = leerNumero()
    if (n <= 0)
        cout << "Por favor, ingrese un número natural mayor a cero." << endl
    else
        mostrarPerfectos(n)
    return 0
}
