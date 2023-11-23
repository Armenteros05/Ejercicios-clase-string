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

// Función para realizar una despedida personalizada
void despedidaPersonalizada(const string& nombre) {
    cout << "Hasta luego, " << nombre << ". Que tengas un buen dia!" << endl;
}

int main() {
    // Ejemplo de cadena
    string mensaje = "Hola, como estas?";

    // Obtener y mostrar la longitud de la cadena
    int longitud = obtenerLongitudCadena(mensaje);
    cout << "La longitud de la cadena es: " << longitud << " caracteres." << endl;

    // Convertir la cadena a mayúsculas y mostrarla
    string mensajeMayusculas = convertirAMayusculas(mensaje);
    cout << "La cadena en mayusculas es: " << mensajeMayusculas << endl;

    // Pedir el nombre del usuario
    string nombreUsuario;
    cout << "Por favor, introduce tu nombre: ";
    getline(cin, nombreUsuario);

    // Saludar al usuario
    cout << "Hola, " << nombreUsuario << "! Como ha sido tu dia?" << endl;

    // Realizar una despedida personalizada
    despedidaPersonalizada(nombreUsuario);

    return 0;
}
