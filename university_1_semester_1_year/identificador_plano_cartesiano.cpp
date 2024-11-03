/* int x, y;
leer(x, y);
imprimir("Usuario, ingrese dos coordenadas x y y");

si (x == 0 && y == 0)
    imprimir("Se encuentra en el origen");
sino si ( x < 0 && y > 0)
    imprimir("Cuadrante A");
sino si( x > 0 && y > 0)
    imprimir("Cuadrante B");
sino si( x > 0 && y < 0)
    imprimir("Cuadrante C");
sino
    imprimir("Cuadrante D");

en c++ */

#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Usuario, ingrese dos coordenadas x y y: ";
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "Se encuentra en el origen" << endl;
    else if (x == 0 && y > 0)
        cout << "Se encuentra en el eje Y positivo" << endl;
    else if (x == 0 && y < 0)
        cout << "Se encuentra en el eje Y negativo" << endl;
    else if (x > 0 && y == 0)
        cout << "Se encuentra en el eje X positivo" << endl;
    else if (x < 0 && y == 0)
        cout << "Se encuentra en el eje X negativo" << endl;
    else if (x < 0 && y > 0)
        cout << "Cuadrante A" << endl;
    else if (x > 0 && y > 0)
        cout << "Cuadrante B" << endl;
    else if (x > 0 && y < 0)
        cout << "Cuadrante C" << endl;
    else
        cout << "Cuadrante D" << endl;

    return 0;
}


