/*
Pedirle al usuario la cantidad de dias que tiene el mes y el dia en el que inicie
para que se imprima como una hoja de calendario. ejemp: si el dia inicia el miercoles
que en pantalla se imprima esto

S  M  T  W  T  F  S
         1  2  3  4
5  6  7  8  9  10 11
12 13 14 15 16 17 18
19 20 21 22 23 24 25
26 27 28 29 30*/

#include <iostream>
using namespace std;

int main(){
    int x = 0, dias, dias_i = 1, dias_salto;
    char semana;
    cout << "Cuantos dias tiene el mes?: ";
    cin >> dias;
    cout << "Que dia de la semana cae el dia? (Miercoles = W): ";
    cin >> semana;
    cout << " D  L  M  W  J  V  S" << endl;

    switch (semana) {
        case 'D':
            cout << "";
            dias_salto = 8;
            break;
        case 'L':
            cout << "   ";
            dias_salto = 7;
            break;
        case 'M':
            cout << "      ";
            dias_salto = 6;
            break;
        case 'W':
            cout << "         ";
            dias_salto = 5;
            break;
        case 'J':
            cout << "            ";
            dias_salto = 4;
            break;
        case 'V':
            cout << "               ";
            dias_salto = 3;
            break;
        case 'S':
            cout << "                  ";
            dias_salto = 2;
            break;
    }
    for (int i = 1; i <= dias; i = i + 1) {
        if (i < 10) {
            cout << " " << i << " ";
        } else {
            cout << i << " ";
        }
        dias_i = dias_i + 1;
        if (dias_i == dias_salto) {
            cout << endl;
            dias_salto = dias_salto + 7;
        }
    }
    return 0;
}
