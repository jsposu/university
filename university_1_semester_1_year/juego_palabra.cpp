/*Hacer un programa que simule el juego del ahorcado, El juego debe tener 
de palabra para adivinar PANAMA la cual debe estar dentro de un vector.
El usuario tiene 3 intentos y si falla se debe imprimir poco a poco el
bicho guindado y si el usuario adivina una letra debe aparecer que adivino
la letra.
Por ejemplo si adivina la letra A que se imprima: _ A _ A _ A, y que cada
vez que se imprima tanto la letra como el bicho se limpie la consola.*/
#include <iostream>
using namespace std;

void palito(int intentos) {
    switch (intentos) {
        case 0:
            cout << "   +---+\n";
            cout << "   |   |\n";
            cout << "       |\n";
            cout << "       |\n";
            cout << "       |\n";
            cout << "       |\n";
            cout << "=========\n";
            break;
        case 1:
            cout << "   +---+\n";
            cout << "   |   |\n";
            cout << "   O   |\n";
            cout << "   |   |\n";
            cout << "       |\n";
            cout << "       |\n";
            cout << "=========\n";
            break;
        case 2:
            cout << "   +---+\n";
            cout << "   |   |\n";
            cout << "   O   |\n";
            cout << "  /|\\  |\n";
            cout << "       |\n";
            cout << "       |\n";
            cout << "=========\n";
            break;

        case 3:
            cout << "   +---+\n";
            cout << "   |   |\n";
            cout << "   O   |\n";
            cout << "  /|\\  |\n";
            cout << "  / \\  |\n";
            cout << "       |\n";
            cout << "=========\n";
            break;
        default:
            cout << "   +---+\n";
            cout << "   |   |\n";
            cout << "       |\n";
            cout << "       |\n";
            cout << "       |\n";
            cout << "       |\n";
            cout << "=========\n";
            break;
    }
}

int main (){
    char palabra[6] = {'P', 'A', 'N', 'A', 'M', 'A'};
    bool letrasDescubiertas[6] = {false, false, false, false, false, false};
    char letra, continuar;
    int intentos = 0;
    bool palabraDescubierta = false;
    bool letraCorrecta = false;
    system("clear");
    cout << "Tiene 3 intentos para adivinar la palabra" << endl;
    cout << "Ingrese cualquier tecla para continuar...";
    cin >> continuar;
        while ( intentos <= 3 && !palabraDescubierta  ){

            letraCorrecta = false;
            system("clear");
            palito(intentos);

            for (int i = 0; i < 6; ++i) {
                if (letrasDescubiertas[i]) {
                    cout << palabra[i] << " ";
                } else {
                    cout << "_ ";
                }
            }
            cout << endl;
            cout << "Coloque una letra: ";
            cin >> letra;

            for (int i = 0; i < 6; ++i) {
                if (palabra[i] == letra) {
                    letrasDescubiertas[i] = true;
                    letraCorrecta = true;
                }
            
            if (!letraCorrecta) {
                cout << "Letra incorrecta" << endl;
                intentos++;
            }

            for (int i = 0; i < 6; ++i) {
                if (!letrasDescubiertas[i] || intentos >= 3) {
                    palabraDescubierta = false;
                }
            }
        }
    }  
    system("clear");
        if (palabraDescubierta) {
        cout << "¡Felicidades! Ha adivinado la palabra: PANAMA" << endl;
    } else {
        palito(intentos);
        cout << "¡Oh no! Se ha quedado sin intentos. La palabra era: PANAMA" << endl;
        return 0;
    }
    return 0;
}