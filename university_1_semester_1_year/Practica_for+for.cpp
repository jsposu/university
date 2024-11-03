/*For inside a for
The practice is about printing the multiplication table
with 2 for*/
#include <iostream>
using namespace std;

int main (){
    for (int y = 4; y <= 5; y = y + 1){
        for (int x = 0; x <= 12; x = x + 1){
            cout << y << " x " << x << " = " << x * y << endl;
        }
        cout << endl;
    }
    return 0;
}
