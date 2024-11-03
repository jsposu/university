#include <iostream>
using namespace std;

int main () {
    int x = 1, y = 1;

    while(y <= 2){
        while(x <= 2){
        if (x == 1 && y == 1){
            cout << "* ";
        }
        else {
            cout << "o ";
        }
        x = x + 1;
        }
        cout << endl;
        x = 1;
        y = y + 1;
    } 

    return 0;
}