// Esto es una practica personal que realize para entender el uso de Void de class

#include <iostream>
#include <string.h>

using namespace std;

void print(string function){
    cout << function << endl;
}

int local_host(){
    int x = 1, y = 1;
    cout << x + y;
    return 0;
}

class Mario{
    public:
        void cargador(){
            cout << "Hello World!" << endl;
        }  
};

int main (){
    Mario cosa; // A la clase que cree le asigne una variable
    Mario* cualquiera = &cosa; // Apunte a la variable con otra
    cualquiera->cargador(); // Imprimi la calse que cree en la funcion principal y le asigne la Clase Mario
    print("HolaMundo"); // void
    local_host(); // funcion extra que no es main 
    return 0;
}


