#include <iostream>
using namespace std;

/*
int size (int z){
cout << "De que tamano quiere el triangulo: ";
cin >> z;
return (z);
}

int main (){
int x = 1, y = 1, rep = 1;
int z;
char salir = 'y';
while (salir == 'y'){
    z = size (z);
        for (int y = 1; y <= z; y++){
            for (int x = 1; x <= rep; x++){
                cout << "* ";
            }
            x = 1;
            rep++; 
            cout << endl;
        }
        cout << "Desea hacer otro triangulo? (y / n)";
        cin >> salir;
        rep = 1;
    }
    return 0;
}
*/

void triangulo (int z){
int x = 1, y = 1, rep = 1;
    for (int y = 1; y <= z; y++){
        for (int x = 1; x <= rep; x++){
            cout << "* ";
        }
        x = 1;
        rep++; 
        cout << endl;
    }
    rep = 1;
}

int main (){
    int z;
    char salir = 'y';
    while ( salir == 'y'){
        cout << "De que tamano quiere el triangulo: ";
        cin >> z;
        triangulo(z);
        cout << "Desea hacer otro triangulo? (y / n)";
        cin >> salir;
    }
    return 0;
}