#include <iostream>
#include <string>

using namespace std;

// Función para obtener la longitud de una cadena
int obtenerLongitudCadena(const string& cadena) {
    return cadena.length();
}

// Función para convertir una cadena a mayúsculas
string convertirAMayusculas(const string& cadena) {
    string cadenaMayusculas = cadena;
    for (char& c : cadenaMayusculas) {
        c = toupper(c);
    }
    return cadenaMayusculas;
}

int main() {
    // Ejemplo de cadena
    string mensaje;
    cout << "Ingrese una palabra: ";
    cin >> mensaje;

    // Obtener y mostrar la longitud de la cadena
    int longitud = obtenerLongitudCadena(mensaje);
    cout << "La longitud de la cadena es: " << longitud << " caracteres." << endl;

    // Convertir la cadena a mayúsculas y mostrarla
    string mensajeMayusculas = convertirAMayusculas(mensaje);
    cout << "La palabra en mayusculas es: " << mensajeMayusculas << endl;

    return 0;
}
