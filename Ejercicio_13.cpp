#include<iostream>
using namespace std;

bool estaOrdenado(int v[], int n)
{
    int i = 0
    while(i < n - 1)
    {
        if(v[i] > v[i + 1])
            return false
        i++
    }
    return true
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

    if(estaOrdenado(v, n))
        cout << "el vector está ordenado de forma creciente" << endl
    else
        cout << "el vector no está ordenado de forma creciente" << endl
}
