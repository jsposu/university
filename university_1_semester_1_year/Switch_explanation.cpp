// Use of Switch

#include <iostream>
using namespace std;

int main() {
    char nota;
    string decision;
    bool salir = false;

    while (!salir) {
        cout << "Escriba su nota: ";
        cin >> nota;
        cout << "Su nota es " << nota;

        switch (nota) {
            case 'A': case 'B':
                cout << " Felicidades" << endl;
                break;
            case 'C':
                cout << " Te salvaste" << endl;
                break;
            case 'D':
                cout << " Felicidades pasaste raspando" << endl;
                break;
            case 'F':
                cout << " Fallaste" << endl;
                break;
            default:
                cout << " Nota no valida" << endl;
        }

        cout << "Desea salir? (mantener / salir): ";
        cin >> decision;

        if (decision == "salir") {
            salir = true;
        }
    }

   return 0;
}