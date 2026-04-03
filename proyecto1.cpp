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

        if (opcion < 1 || opcion > 6)
        {
            cout << "Opcion no valida. Por favor, intente de nuevo.\n" << endl;
            continue;
        }
        

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

    if (contador >= 100)
    {
        cout << "Limite de estudiantes alcanzado.\n" << endl;
        return;
    }

    string nombre, apellido;
    cout << "Ingrese el nombre del estudiante: ";
    cin >> nombre;

    cout << "Ingrese el apellido del estudiante: ";
    cin >> apellido;

    nombres[contador] = nombre + " " + apellido;

    do {

        cout << "Ingrese la nota del estudiante (0-20): ";
        cin >> notas[contador]; 

        if (notas[contador] < 0 || notas[contador] > 20)
        {
            cout << "Nota invalida. Por favor, ingrese una nota entre 0 y 20. \n";
        }
        
    } while (notas[contador]<0 || notas[contador]>20);

    contador++;
    cout << "Estudiante registrado exitosamente." << endl;

    cout << "===============================\n" << endl;

}

// Función para mostrar los estudiantes y sus notas

void mostrar(string nombres[], double notas[], int contador) {

    if (contador == 0)
    {
        cout << "No hay estudiantes registrados." << endl;
        return;
    }

    cout << "\n====== LISTA DE ESTUDIANTES Y NOTAS: ===========" << endl;

    for (int i = 0; i < contador; i++)
    {
        cout << "Estudiante: " <<nombres[i] << " - Nota: " << notas[i] << endl;
        
    }

    cout << "==============================================\n" << endl;

}

// Función para calcular el promedio de las notas

void calcularPromedio(double notas[], int contador) {

    if (contador == 0)
    {
        cout << "No hay estudiantes registrados para calcular el promedio." << endl;
        return;
    }

    double suma = 0;

    for (int i = 0; i < contador; i++)
    {
        suma = suma + notas[i];
    }

    double promedio = suma / contador;

    cout << "================================\n" << endl;

    cout << "El promedio de las notas es: " << promedio << endl;

    cout << "================================\n" << endl;
    
}

// Función para buscar un estudiante por nombre
void buscar(string nombres[], double notas[], int contador) {

    if (contador == 0){
        cout << "No hay estudiantes registrados para buscar. \n" << endl;
        return;
    }

    string nombre, apellido;

    cout << "Ingrese el nombre: ";
    cin >> nombre;
    
    cout << "Ingrese el apellido: ";
    cin >> apellido;

    string nombreCompleto = nombre + " " + apellido;

    cout << "================================\n" << endl;

    for (int i = 0; i < contador; i++)
    {
        if (nombres[i] == nombreCompleto) {
            cout << "Estudiante encontrado: " << nombres[i] << " - Nota: " << notas[i] <<endl;
            return;
        }
    }

    cout << "================================\n" << endl;
    
    cout << "Estudiante no encontrado.\n" << endl;

}

// Funcion de mejora para mostrar el estudiante con la mayor nota
void mayorNota(string nombre[], double notas[], int contador) {

    if (contador == 0)
    {
        cout << "No hay estudiantes registrados para mostrar la mayor nota." << endl;
        return;
    }

    double mayor = notas[0];
    int indiceMayor = 0;

    for (int i = 0; i < contador; i++)
    {
        if (notas[i] > mayor)
        {
            mayor = notas[i];
            indiceMayor = i;
        }
        
    }

    cout << "================================\n" << endl;
    cout << "El estudiante con la mayor nota es: " << nombre[indiceMayor] << " - Nota: " << mayor << endl;
    cout << "================================\n" << endl;

}