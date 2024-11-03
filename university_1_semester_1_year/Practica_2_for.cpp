/* Practica 2: Dibuje la siguiente figura usando PARA
* * *
* * *
* * *      */

#include <iostream>
using namespace std;
void forma_2(){  // Using for twice
    int x, y;
    for(int y = 1; y <= 3; y = y + 1){
        for(int x = 1; x <= 3; x = x + 1){
            cout << " * ";
        }
        cout << endl;
        x = 1;
    }
}

void forma_1(){ // Using for once
    int x = 3;
    int y = 3;
    int z = 0;
    int total = x * y;
    for (int c = 1; c <= total; c = c + 1){
        cout << " * ";
        z = z + 1;
        if (z == 3){
            cout << endl;
            z = 0;
        }
    }
}

int main(){
    forma_1();
    return 0;
}