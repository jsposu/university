#include <iostream>
using namespace std;

float kelvin (int temp){
    float tempf;
    tempf = temp + 273.15;
    return tempf;
}

int main (){
    int temp;
    float tempf;
    cout << "Escriba una temperatura en C°: ";
    cin >> temp;
    tempf = kelvin(temp);
    cout << "La temperatura en K° es de: " << tempf;
    return 0;
}