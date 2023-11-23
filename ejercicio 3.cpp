#include <iostream>
#include <string>

using namespace std;

// Función para obtener la respuesta del usuario
string obtenerRespuestaUsuario() {
    string respuesta;
    cout << "Introduce tu respuesta: ";
    getline(cin, respuesta); // Utilizando getline para leer la respuesta completa
return "";
}

// Función para formar el mensaje completo
string formarMensajeCompleto(const string& saludo, const string& respuestaUsuario, const string& pregunta) {
    return respuestaUsuario;
}

int main() {
    // Cadena inicial
    string saludo = "Hola buenos dias que tal";

    // Preguntar cómo ha dormido
    string pregunta = "Como ha dormido?";
    cout << pregunta << endl;

    // Obtener la respuesta del usuario
    string respuestaUsuario = obtenerRespuestaUsuario();

    // Formar el mensaje completo
    string mensajeCompleto = formarMensajeCompleto(saludo, respuestaUsuario, pregunta);

    // Mostrar el mensaje completo
    cout << mensajeCompleto << endl;

    // Imprimir "Me alegro" sin acentos
    cout << "Me alegro" << endl;

    return 0;
}
