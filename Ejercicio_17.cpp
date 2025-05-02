#include<iostream>
using namespace std;

int buscarElemento(int v[], int n, int valor)
{
    int i = 0
    while(i < n)
    {
        if(v[i] == valor)
            return i
        i++
    }
    return -1
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

    int valor
    cout << "ingrese el valor a buscar: "
    cin >> valor

    int pos = buscarElemento(v, n, valor)

    if(pos == -1)
        cout << "el valor no se encuentra en el vector" << endl
    else
        cout << "el valor se encuentra en la posición: " << pos << endl
}
