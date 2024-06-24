#include <iostream>
using namespace std;

int main () {
    int edad;
    char genero;
    cout << "Cual es su genero";
    cin >> genero;
    cout << "Cual es su edad";
    cin >> edad;
    if ( genero == 'M' ){
        cout << "usted paga 70$";
    }
    if ( genero == 'F' ){
        if ( edad <= 30 ){
            cout << "usted paga 20$";
        }
        else {
            cout << "usted paga 50$";
        }
    }
    return 0;
}