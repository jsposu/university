#include <iostream>
using namespace std;

void dibujo (int c, int d) {
    for (int y = 1; y <= c; y = y + 1){
        for (int x = 1; x <= d; x = x + 1){
            if ( (x + y) % 2 == 0 ){
                cout << "  ";
            }
            else {
                cout << " o";
            }
        }
        cout << endl;
    }
}

int main (){
    int c, d;
    cout << "Ingrese las dimenciones del rectangulo" << endl;
    cin >> c;
    cin >> d;

    dibujo(c,d);

    return 0;
}