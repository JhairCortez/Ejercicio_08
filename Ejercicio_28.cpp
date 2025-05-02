#include<iostream>
using namespace std;

int main()
{
    int n
    cout << "ingrese el tamaño de la matriz cuadrada: "
    cin >> n

    int m[10][10]
    int i = 0
    while(i < n)
    {
        int j = 0
        while(j < n)
        {
            cout << "m[" << i << "][" << j << "]: "
            cin >> m[i][j]
            j++
        }
        i++
    }

    int suma = 0
    i = 0
    while(i < n)
    {
        suma += m[i][i]
        i++
    }

    cout << "suma de la diagonal principal: " << suma << endl
}
