#include <iostream>
using namespace std;

int main () {
    int x = 1, y = 1;

    while(y <= 3){
        while(x <= 3){
        if (x == y){
            cout << "* ";
        }
        else {
            cout << "  ";
        }
        x = x + 1;
        }
        cout << endl;
        x = 1;
        y = y + 1;
    } 

    return 0;
}
