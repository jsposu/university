#include <iostream>
using namespace std;

void problema(){
    int a = 1, b = 9;
    for (int y = 1; y <= 5; y = y + 1){
        for (int x = 1; x <= 9; x = x + 1){
            if (x == a || x == b){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
        a = a + 1;
        b = b - 1;
    }
}

int main (){
    problema();
}