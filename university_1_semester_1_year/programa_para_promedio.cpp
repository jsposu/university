/* Escriba un programa que pida una cantidad indefinida de notas
El programa le pregunta si desea inresar otra nota, usted responde con (S/N)
 Al terminar, el prorama imprime el promedio */

#include <iostream>
using namespace std;

int main () {
    int num = 0;
    int nota, notas_total;
    char letra = 'S';
    while ( letra == 'S' ){
        cout << "Escriba una nota: ";
        cin >> nota;
        notas_total = notas_total + nota;
        cout << "Desea ingresar otra nota? (S/N) ";
        cin >> letra;
        num = num + 1;
    }
    notas_total = notas_total / num;
    cout << "Su promedio final es: " << notas_total;
    return 0;
}
