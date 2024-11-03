/* Practica
Escriba un programa que pida al usuario una hora en formato 24 horas sin minutos
Convierta la hora a formato AM / PM e imprimala en pantalla.

int hora_militar;
imprimir("Usuario, escriba una hora en formato militar");
leer hora_militar;

si (hora_militar >=24){
   imprimir("Error")
}
sino si (hora_militar == 0){
   imprimir("La hora actual en formato AM/PM es: 12 AM");
}
sino si (hora_militar <= 12){
   imprimir("La hora actual en formato AM/PM es:", hora_militar "AM");
}
sino{
   imprimir("La hora actual en formato AM/PM es:", hora_militar - 12 "PM");
} //

en c++ seria == */

#include <iostream>
using namespace std;

int main() {
    int hora_militar;
    cout << "Usuario, escriba una hora en formato militar: ";
    cin >> hora_militar;

    if (hora_militar == 0)
        cout << "La hora actual en formato AM/PM es: 12 AM" << endl;
    else if (hora_militar <= 12)
        cout << "La hora actual en formato AM/PM es: " << hora_militar << " AM" << endl;
    else
        cout << "La hora actual en formato AM/PM es: " << hora_militar - 12 << " PM" << endl;

    return 0;
}
