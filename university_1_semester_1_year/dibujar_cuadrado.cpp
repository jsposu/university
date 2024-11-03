#include <iostream>
using namespace std;

int dibujarcuadrado (char cuadro, char relleno){
    int contador = 0;
    for(int y = 1; y <= 5; y++){
        for (int x = 1; x <= 5; x++){
            if ((x == 1 || x == 5) || (y == 1 || y == 5)){
                cout << cuadro << " ";
            }
            else {
                cout << relleno << " ";
            }
            contador++;
        }
        cout << endl;
    }
    return (contador);
}

int main (){
    char cuadro, relleno;
    cout << "usuario, que caracter quiere utilizar en el cuadro?: ";
    cin >> cuadro;
    cout << endl << "usuario, que caracter quiere utilizar en el relleno?: ";
    cin >> relleno;
    int contador = dibujarcuadrado (cuadro, relleno);
    cout << "La cantidad de caracteres son: " << contador;
}