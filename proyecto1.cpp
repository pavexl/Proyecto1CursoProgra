#include <iostream>
using namespace std;

//====================== PROTOTIPO DE FUNCIONES ======================

void registrar(string nombres[], double notas[], int &contador);
void mostrar(string nombres[], double notas[], int contador);
void calcularPromedio(double notas[], int contador);
void buscar(string nombres[], double notas[], int contador);
void mayorNota(string nombres[], double notas[], int contador);

//====================== PROGRAMA PRINCIPAL ======================
int main() {

    // Declaración de arreglos y variables
    const int MAX_ESTUDIANTES = 100;
    string nombres[MAX_ESTUDIANTES];
    double notas[MAX_ESTUDIANTES];
    int contador = 0;
    int opcion;

    // Menu del programa
    do
    {
        cout << "BIENVENIDO AL PROGRAMA DE GESTION DE NOTAS" << endl;
        cout << "1. Registrar estudiante y nota" << endl;
        cout << "2. Mostrar estudiantes y notas" << endl;
        cout << "3. Calcular promedio de notas" << endl;
        cout << "4. Buscar estudiante por nombre" << endl;
        cout << "5. Mostrar estudiante con mayor nota" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Validar la opción ingresada y llamo a la función correspondiente
        switch (opcion) {

            case 1:
                registrar(nombres, notas, contador);
            break;

            case 2:
                mostrar(nombres, notas, contador);
            break;

            case 3:
                calcularPromedio(notas, contador);
            break;

            case 4:
                buscar(nombres, notas, contador);
            break;

            case 5:
                mayorNota(nombres, notas, contador);
            break;

            case 6:
                cout << "Saliendo del programa..." << endl;
            break;
        
            default:
                cout << "Opcion no valida. Por favor, intente de nuevo." << endl;
            break;
        }

    } while (opcion != 6);

    return 0;

}

//======================= DEFINICION DE FUNCIONES ======================
// Función para registrar un estudiante y su nota

void registrar(string nombres[], double notas[], int &contador) {

    cout << "Ingrese el nombre del estudiante: ";
    cin >> nombres[contador];

    do {

        cout << "Ingrese la nota del estudiante (0-20): ";
        cin >> notas[contador]; 

        if (notas[contador] < 0 || notas[contador] > 20)
        {
            cout << "Nota invalida. Por favor, ingrese una nota entre 0 y 20." << endl;
        }
        
    } while (notas[contador]<0 || notas[contador]>20);

    contador++;
    cout << "Estudiante registrado exitosamente." << endl;

}

