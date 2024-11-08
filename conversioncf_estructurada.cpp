// Estructura básica de un programa en C++ (paradigma de programación estructurada)

// Zona de inclusión de librerías
#include <iostream>
using namespace std;

// Zona de declaración de variables globales (opcional)
float c, f;

// Función principal
int main() {
    // Cuerpo de la función principal o programa principal
    // Captura de datos de entrada
	cout << "Indique la cantidad de grados Centigrados: ";
    cin >> c;
    // Procesamiento de datos de entrada
    f = (9.0/5.0) * c + 32;
    // Exposición de resultados
    cout << "Grados Fahrenheit equivalentes: " << f << endl;
    system("PAUSE");
    // Retorno de la función principal
    return 0;
}