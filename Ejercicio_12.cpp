#include<iostream>
using namespace std;

float promedio(int v[], int n)
{
    int suma = 0
    int i = 0
    while(i < n)
    {
        suma += v[i]
        i++
    }
    return float(suma) / n
}

int contarMayoresAlPromedio(int v[], int n)
{
    float prom = promedio(v, n)
    int contador = 0
    int i = 0
    while(i < n)
    {
        if(v[i] > prom)
            contador++
        i++
    }
    return contador
}

int main()
{
    int n
    cout << "ingrese tamaño del vector: "
    cin >> n

    int v[n]
    int i = 0
    while(i < n)
    {
        cout << "v[" << i << "]: "
        cin >> v[i]
        i++
    }

    cout << "cantidad de elementos mayores al promedio: " << contarMayoresAlPromedio(v, n) << endl
}
