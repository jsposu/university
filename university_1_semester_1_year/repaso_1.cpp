/*Programa que imprime el siguiente patron
* * *
* * *
o o o
*/

#include <iostream>
using namespace std;

int main (){
    for (int y = 1; y <= 3; y = y + 1){
        for (int x = 1; x <= 3; x = x + 1){
            if (y <= 2){
                cout << " *";
            }
            else {
                cout << " o";
            }
        }
        cout << endl;
    }
}