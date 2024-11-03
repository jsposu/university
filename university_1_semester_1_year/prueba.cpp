#include <iostream>
using namespace std;

int main(){
    int dias, dias_c = 1, start_day;
    char semana;
    
    cout << "Cuantos dias tiene el mes?: ";
    cin >> dias;
    cout << "Que dia de la semana cae el dia 1? (D = Domingo, L = Lunes, M = Martes, W = Miercoles, J = Jueves, V = Viernes, S = Sabado): ";
    cin >> semana;
    
    // Determinar el valor inicial de start_day basado en el día de la semana
    switch (semana) {
        case 'D':
            start_day = 0;
            break;
        case 'L':
            start_day = 1;
            break;
        case 'M':
            start_day = 2;
            break;
        case 'W':
            start_day = 3;
            break;
        case 'J':
            start_day = 4;
            break;
        case 'V':
            start_day = 5;
            break;
        case 'S':
            start_day = 6;
            break;
        default:
            cout << "Dia de la semana no valido." << endl;
            return 1;
    }

    cout << "D  L  M  W  J  V  S" << endl;

    // Imprimir espacios iniciales para los días antes del primer día del mes
    for (int i = 0; i < start_day; i++) {
        cout << "   ";
    }

    // Imprimir los días del mes
    for (int i = 1; i <= dias; i++) {
        if (i < 10) {
            cout << " " << i << " "; // Añadir un espacio extra para los números de un solo dígito
        } else {
            cout << i << " ";
        }
        start_day++;
        
        // Insertar un salto de línea después de cada sábado
        if (start_day % 7 == 0) {
            cout << endl;
        }
    }

    // Insertar un salto de línea al final si no termina en sábado
    if (start_day % 7 != 0) {
        cout << endl;
    }

    return 0;
}
