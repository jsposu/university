#include <iostream>
using namespace std;

int suma (int num1, int num2, int resp){
    resp = num1 + num2;
    cout << "El resultado es: " <<resp;
    return resp;
}

int main (){
    int num1, num2, resp;
    cout << "Ingrese los numeros que desea sumar";
    cin >> num1;
    cin >> num2;
    suma();
    return 0;
}