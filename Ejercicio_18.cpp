#include<iostream>
using namespace std;

void insertarElemento(int v[], int& n, int valor, int pos)
{
    int i = n
    while(i > pos)
    {
        v[i] = v[i - 1]
        i--
    }
    v[pos] = valor
    n++
}

int main()
{
    int n
    cout << "ingrese tamaño del vector: "
    cin >> n

    int v[100]
    int i = 0
    while(i < n)
    {
        cout << "v[" << i << "]: "
        cin >> v[i]
        i++
    }

    int valor, pos
    cout << "ingrese valor a insertar: "
    cin >> valor
    cout << "ingrese posición donde insertar: "
    cin >> pos

    if(pos < 0 || pos > n)
    {
        cout << "posición inválida" << endl
        return 0
    }

    insertarElemento(v, n, valor, pos)

    cout << "vector resultante: "
    i = 0
    while(i < n)
    {
        cout << v[i] << " "
        i++
    }
    cout << endl
}
