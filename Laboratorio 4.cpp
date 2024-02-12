#include <iostream>
#include <cmath>

using namespace std;

double realizarOperacion(double num1, double num2, char operacion);
void imprimirResultado(double resultado);

int main() {
    int cantidadOperaciones;

    cout << "Inicio del Programa" << endl;

    // Declarao las variables que utilizare
    double num1, num2, resultado;
    char operacion;

    // Le pido al usuario las operaciones que quiere realizar
    cout << "Ingrese la cantidad de operaciones a realizar: ";
    cin >> cantidadOperaciones;

    for (int i = 0; i < cantidadOperaciones; ++i) {
        // Solicito los datos
        cout << "Operacion #" << i + 1 << endl;
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << "Seleccione la operacion (+, -, *, /, %): ";
        cin >> operacion;

        // Llamo la función que realizara la operación
        resultado = realizarOperacion(num1, num2, operacion);

        // Llamo la funcion que se encargara de impirmir los resultados
        imprimirResultado(resultado);
    }

    // Fin del programa
    cout << "Fin del Programa" << endl;

    return 0;
}

// Implemento la función que realizara la ooperación
double realizarOperacion(double num1, double num2, char operacion) {
    double resultado;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Error en tu operación." << endl;
                resultado = 0.0;
            }
            break;
        case '%':
            if (num2 != 0) {
                resultado = fmod(num1, num2);
            } else {
                cout << "Error en tu operación." << endl;
                resultado = 0.0;
            }
            break;
        default:
            cout << "Operacion no valida." << endl;
            resultado = 0.0;
            break;
    }

    return resultado;
}

//Implemento la funcion que se encargara en imprimir
void imprimirResultado(double resultado) {
    cout << "El resultado es: " << resultado << endl;
}

