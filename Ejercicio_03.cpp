#include<iostream>
using namespace std;

string obtenerMorse(int digito)
{
    string morse[10] = {".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"}
    return morse[digito]
}
void convertirAMorse(int numero)
{
    string texto = to_string(numero)
    for(int i = 0; i < texto.length(); i++)
        int digito = texto[i] - '0'
        cout << obtenerMorse(digito) << " "
    cout << endl
}
int main()
{
    int num
    cout << "Ingrese un número: "
    cin >> num
    convertirAMorse(num)
}
