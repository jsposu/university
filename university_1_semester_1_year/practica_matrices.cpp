// Practica 1 //
#include <iostream>
using namespace std;

int main () {
    int x = 1, y = 1;
    while ( y <= 3 ) {
        while ( x <= 3 ) {
            if ( x % 2 == 0 ) {
                cout << "- ";
            }
            else {
                cout << "* ";
            }
            x = x + 1;
        }
        cout << endl;
        y = y + 1;
        x = 1;
    }
    return 0;
}

// Practica 2 //

#include <iostream>
using namespace std;

int main () {
    int x = 1, y = 1;
    while ( y <= 3 ) {
        while ( x <= 3 ) {
            if ( y % 2 == 0 ) {
                cout << "- ";
            }
            else {
                cout << "* ";
            }
            x = x + 1;
        }
        cout << endl;
        y = y + 1;
        x = 1;
    }
    return 0;
}

// Practica 3 //

#include <iostream>
using namespace std;

int main () {
    int x = 1, y = 1;
    while ( y <= 3 ) {
        while ( x <= 3 ) {
            if ( x == 2 && y == 2 ) {
                cout << "A ";
            }
            else {
                cout << "* ";
            }
            x = x + 1;
        }
        cout << endl;
        y = y + 1;
        x = 1;
    }
    return 0;
}

// Practica 4 //

#include <iostream>
using namespace std;

int main (){

int x = 1, y = 1, rep = 0; 
    while ( y <= 4 ) {
        rep = rep + 1;
        while ( x <= rep ) {
            cout << "* ";
            x = x + 1;
        }
        cout << endl;
        y = y + 1;
        x = 1;
        }
    return 0;
}

// Practica 5  sin terminar //
/* El programa debe imprimir el siguiente patron */
      *
    * *
  * * *
* * * * 
#include <iostream>
using namespace std;

int main () {
int x = 1, y = 1, cont = 3;
while ( y <= 4 ){
    while ( x <= 4 ){
        if ( x <= cont ){
        cout << "  ";
        }
        else {
            cout << "* ";
        }
    x = x + 1;
    }
    cout << endl;
    x = 1;
    cont = cont - 1;
    y = y + 1;
}
    return 0;
}
