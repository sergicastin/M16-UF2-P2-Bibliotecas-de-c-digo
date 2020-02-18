// PRALParametros Referencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "BIBLIO_Parametros_Referencia.h"
using namespace std;

//variables globales
double a, b, c;
double x1, x2;
int numSols;

void askuser(double&, double&, double&);
void resultados(int, double, double, double, double, double);

int main() {

    setlocale(LC_ALL, "es");
    askuser(a, b, c);
    numSols = calculate(a, b, c, x1, x2);
    resultados(numSols, x1, x2, a, b, c);
    system("pause");
}

void askuser(double& oa, double& ob, double& oc) {
    do {
        cout << "Introduzca el valor del coeficiente a";
        cin >> oa;
        if (a == 0) {
            cout << "En A, escribe un valor distinto a 0";
            system("cls");

        }
        cout << "Introduzca el valor del coeficiente b";
        cin >> ob;

        cout << "Introduzca el valor del coeficiente c";
        cin >> oc;
    } while (a == 0);
    {

    }

}

void resultados(int inumSols1, double ix1, double ix2, double ia, double ib, double ic) {

    if (inumSols1 == 0) {
        cout << "The equation doesn't have a solution " << endl;
    }

    if (inumSols1 == 1) {
        cout << "The equation have one solution and the solution is: " << ix1 << endl;
    }

    if (inumSols1 == 2) {
        cout << "The equation have two solutions and the solutions are:  " << ix1 << " and " << ix2 << endl;
    }

}




//x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);

//cout << "El valor del coeficiente a es:" << a << "\n";
//cout << "El valor del coeficiente a es:" << b << "\n";
//cout << "El valor del coeficiente a es:" << c << "\n";
//cout << "El número de soluciones es: " << numSols << endl;





// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln