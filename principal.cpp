
#include <iostream>

using namespace std;

int main()
{
    bool b = 0;
    char opcion;
    while (b == 0) {
        cout << "MI NOMBRE ES HECTOR DANIEL VARGAS GONZALES\n";
        cout << "NACI EN SUCRE BOLIVIA EL 29 DE ENERO DE 2002\n";
        cout << "ESTUDIE EN EL COLEGIO DOMINGO SAVIO\n";
        cout << "ESUDIO EN LA FACULTAD DE TECNOLOGIA\n";
        cout << "LA CARRERA DE INGENIERIA DE SISTEMAS\n";
        cout << "ME COMPROMETO A NO REPROBAR EL SEMESTRE\n";
        cout << endl;
        cout << "desea salir del programa precione 0 \n";
        cout << "cualquier letra para volver a ver  \n";
        cin >> opcion;
        if (opcion == '0') {
            b = 1;
        }
        else {
            b = 0;
        }
    }
  
}