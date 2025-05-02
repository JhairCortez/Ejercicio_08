#include<iostream>
using namespace std;

void eliminarElemento(int v[], int& n, int pos)
{
    int i = pos
    while(i < n - 1)
    {
        v[i] = v[i + 1]
        i++
    }
    n--
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

    int pos
    cout << "ingrese posición a eliminar: "
    cin >> pos

    if(pos < 0 || pos >= n)
    {
        cout << "posición inválida" << endl
        return 0
    }

    eliminarElemento(v, n, pos)

    cout << "vector resultante: "
    i = 0
    while(i < n)
    {
        cout << v[i] << " "
        i++
    }
    cout << endl
      }
