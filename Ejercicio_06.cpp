#include<iostream>
using namespace std;

void convertirABinario(int n)
{
    string binario = ""
    while(n > 0)
    {
        int residuo = n % 2
        binario = char(residuo + '0') + binario
        n /= 2
    }
    cout << "Binario: " << binario << endl
}

int main()
{
    int n
    cout << "Ingrese un número decimal: "
    cin >> n
    convertirABinario(n)
}
