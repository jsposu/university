/* int dia, mes, anio; int dia_sig, mes_sig, anio_sig;
imprimir("Usuario, escriba un día");
leer(dia);
imprimir("Usuario, escriba un mes");
leer(mes);
imprimir("Usuario, escriba un año");
leer(anio);

si(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes =.= 12){
    si(mes == 12 && dia == 31){
    anio_sig == anio + 1;
    mes_sig == 1;
    dia_sig == 1;
    }
    sino si(dia == 31){
    anio_sig == anio;
    mes_sig == mes + 1;
    dia == 1;
    }
    sino{
    anio_sig == anio;
    mes_sig == mes + 1;
    dia_sig == dia + 1;
    }
}
si(mes == 2){
    si(dia == 28){
    anio_sig == anio;
    mes_sig == mes + 1;
    dia_sig == 1;
    }
   sino{ 
   anio_sig == anio;
   mes_sig == mes;
   dia_sig == dia + 1;
}
si(mes == 4 || mes == 6 || mes == 9 || mes == 11){
    si(dia == 30){
    anio_sig == anio;
    mes_sig == mes + 1;
    dia == 1;
    }
    sino{
    anio_sig == anio;
    mes_sig == mes + 1;
    dia_sig == dia + 1;
    }
}
imprimir("La fecha de mañana sera: ", dia_sig "del mes ", mes_sig "del año ", anio_sig);
*/

#include <iostream>

using namespace std;

int main() {
    int dia, mes, anio;
    int dia_sig, mes_sig, anio_sig;

    cout << "Usuario, escriba un día: ";
    cin >> dia;
    cout << "Usuario, escriba un mes: ";
    cin >> mes;
    cout << "Usuario, escriba un año: ";
    cin >> anio;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        if (mes == 12 && dia == 31) {
            anio_sig = anio + 1;
            mes_sig = 1;
            dia_sig = 1;
        } else if (dia == 31) {
            anio_sig = anio;
            mes_sig = mes + 1;
            dia_sig = 1;
        } else {
            anio_sig = anio;
            mes_sig = mes;
            dia_sig = dia + 1;
        }
    } else if (mes == 2) {
        if (dia == 28) {  // Esto no toma en cuenta años bisiestos
            anio_sig = anio;
            mes_sig = mes + 1;
            dia_sig = 1;
        } else {
            anio_sig = anio;
            mes_sig = mes;
            dia_sig = dia + 1;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia == 30) {
            anio_sig = anio;
            mes_sig = mes + 1;
            dia_sig = 1;
        } else {
            anio_sig = anio;
            mes_sig = mes;
            dia_sig = dia + 1;
        }
    }

    cout << "La fecha de mañana sera: " << dia_sig << " del mes " << mes_sig << " del año " << anio_sig << endl;

    return 0;
}
