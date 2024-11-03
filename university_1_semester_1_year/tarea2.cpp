/*
- Escriba un programa que pida al usuario una fecha, el programa entonces debe calcular la fecha
  del dia siguiente.
- Una vez presentada la fecha del dia siguiente, pregunte al usuario si desea ingresar otra fecha.
- Tome en cuenta los anios bisiestos.
- Los anios validos van de 1900 a 2050.QUE SALGA FECHA NO VALIDA
- Si el usuario escibe una fecha no valida, mande un mensaje en pantalla y dele oportunidad
de infresar la fecha correctamente, el usuario puede realizar todos los intentos que desee.

+ Puede usar un MIENTRAS para que el usuario pueda ingresar mas fechas o coregirla si es necesario.
+ Puede usar un SWITCH para elegir entre diferentes meses en el argoritmo.  */

#include <iostream>
using namespace std;

int main(){
  char salir = 'S';
  while ( salir == 'S' ){
  int dia, mes, anio;
    int dia_sig, mes_sig, anio_sig;

    cout << "Usuario, escriba un anio: " << endl;
    cin >> anio;
    cout << "Usuario, escriba un mes: " << endl;
    cin >> mes;
    cout << "Usuario, escriba un dia: " << endl;
    cin >> dia;

    if (anio < 1900 || anio > 2050){
        cout << "Anio incorrecto, ingrese una fecha valida" << endl;
        cout << "Usuario, escriba un día: " << endl;
        cin >> dia;
        cout << "Usuario, escriba un mes: " << endl;
        cin >> mes;
        cout << "Usuario, escriba un año: " << endl;
        cin >> anio;
    }

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
        if (dia == 28) {
            anio_sig = anio;
            mes_sig = mes + 1;
            dia_sig = 1;
        } else {
            anio_sig = anio;
            mes_sig = mes;
            dia_sig = dia + 1;
        }    
    } 

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) { // If Para anios biciestos
        if (dia_sig > 29) {
            dia_sig = 1;
            mes_sig = 3;
        }
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
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
    cout << "Desea ingresar otra fecha? ( S / N )" << endl;
    cin >> salir;
  }
}