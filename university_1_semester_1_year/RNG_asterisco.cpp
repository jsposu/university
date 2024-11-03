#include <iostream>
#include "ramram.h"

using namespace std;

int main (){
    int numero;
    for (int x = 1; x <=10; x++) {
        numero = print_random (1, 10);
        cout << numero << endl;
    }
}


