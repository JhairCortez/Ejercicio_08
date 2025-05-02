#include<iostream>
using namespace std;

int sumarVector(int v[], int n)
{
    int suma = 0
    int i = 0
    while(i < n)
    {
        suma += v[i]
        i++
    }
    return suma
}

int main()
{
    int n
    cout << "Ingrese tamaño del vector: "
    cin >> n

    int v[n]
    int i = 0
    while(i < n)
    {
        cout << "v[" << i << "]: "
        cin >> v[i]
        i++
    }

    cout << "Suma: " << sumarVector(v, n) << endl
}
