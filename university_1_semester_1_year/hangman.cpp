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
            cout << "       |\n";
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

int main() {
    char palabra[6] = {'P', 'A', 'N', 'A', 'M', 'A'};
    bool letrasDescubiertas[6] = {false, false, false, false, false, false};
    char letra, continuar;
    int intentos = 0;
    bool palabraDescubierta = false;
    bool letraCorrecta = false;

    cout << "Tiene 3 intentos para adivinar la palabra" << endl;
    cout << "Ingrese cualquier tecla para continuar...";
    cin >> continuar;

    while (intentos < 3 && !palabraDescubierta) {
        letraCorrecta = false;
        system("clear"); // Limpia la consola (o utiliza saltos de línea)

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
        }

        if (!letraCorrecta) {
            cout << "Letra incorrecta" << endl;
            intentos++;
        }

        // Verificar si todas las letras han sido descubiertas
        palabraDescubierta = true;
        for (int i = 0; i < 6; ++i) {
            if (!letrasDescubiertas[i]) {
                palabraDescubierta = false;
                break;
            }
        }
    }

    system("clear");

    if (palabraDescubierta) {
        cout << "¡Felicidades! Ha adivinado la palabra: PANAMA" << endl;
    } else {
        palito(intentos);
        cout << "¡Oh no! Se ha quedado sin intentos. La palabra era: PANAMA" << endl;
    }

    return 0;
}
