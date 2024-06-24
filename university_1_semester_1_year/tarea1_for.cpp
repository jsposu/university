/* tarea: Hacer la siguiente figura 
*       *
 *     *
  *   *
   * *
    *           */
#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int cols = 9;
    int total = rows * cols; 
    int a = 1;
    int b = 9;

    for (int c = 1; c <= total; c = c + 1) {
        int currentRow = (c - 1) / cols + 1; 
        int currentCol = (c - 1) % cols + 1;

        if (currentCol == a || currentCol == b) {
            cout << "*";
        } else {
            cout << " ";
        }
        
        if (currentCol == 9) {
            cout << endl;
            a = a + 1;
            b = b - 1;
        }
    }
    return 0;
}

