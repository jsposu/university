#include <iostream>
using namespace std;

double retiro (double monto_inicial) { //monto existente y mandar final
    double plata_r, plata_final;
    cout << "Ingrese el monto que va a retirar: ";
    cin >> plata_r;
    plata_final = monto_inicial - plata_r;
    return (plata_final);
}

double deposito (double monto_inicial) {
    double plata_d, plata_final;
    cout << "Ingrese el monto que desea ingresar: ";
    cin >> plata_d;
    plata_final = monto_inicial + plata_d; 
    return (plata_final);
}

int main (){
    double monto = 100.00;
    int opcion;
    char salir = 's';
    while ( salir == 's' ){
        cout << "Bienvenido al cajero automatico" << endl;
        cout << "Usted tiene: " << monto << "$" << endl;
        cout << "1. Ingresar" << endl;
        cout << "2. Retirar" << endl;
        cout << "3. Salir" << endl;
        cout << "INGRESE LA OPCION: ";
        cin >> opcion;
        switch (opcion){
            case 1:
                monto = deposito(monto);
                break;
            case 2:
                monto = retiro(monto);
                break;
            default:
                return 0;
        }
        cout << salir;
        cout << "Dinero disponible = " << monto << endl;
        cout << "Desea volver a usar el cajero? ( s / n ): ";
        cin >> salir;
    }
    return 0;
}