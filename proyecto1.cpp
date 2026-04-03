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

        





















    } while (condition);
    





}