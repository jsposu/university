/* Practica 1: Imprima la tabla del 5 usando PARA */

#include <iostream>
using namespace std;

int main (){
    int y = 0;
    for (int x = 0; x <= 12; x = x + 1){
        cout << "5 x " << x << " = " << x * 5 << endl;
    }
    return 0;
}
