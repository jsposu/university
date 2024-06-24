/* Imprima los 8 primeros numeros de
la serie de Fibonacci usando FOR 
1 1 2 3 5 8 13 21*/

#include <iostream>
using namespace std;

int main (){
    int a = 1, b = 1, c = 0;
    for (int x = 0; x < 8; x = x + 1){
        c = a + b; 
        cout << a << " ";
        a = b;
        b = c; 
    }    
    return 0;
}

