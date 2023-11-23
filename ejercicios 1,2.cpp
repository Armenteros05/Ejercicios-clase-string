#include <iostream>
#include <string>
using namespace std;
string nombre;

int main()
{
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Hola " << nombre << endl;
    string frase;
    cout << "Ingrese una frase: ";
    cin >> frase;
    cout << "La frase es: " << frase << endl;
    size(frase);
    cout << "La frase tiene " << size(frase) << " caracteres" << endl;
    empty(frase);
    if (frase.empty())
    {
        cout << "La frase esta vacia" << endl;
    }
    else
    {
        cout << "La frase no esta vacia" << endl;
    }
    return 0;
}
