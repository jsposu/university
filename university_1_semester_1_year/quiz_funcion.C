#include <stdio.h>

float kelvin(int temp){
    float tempf;
    tempf = temp + 273.15;
    return tempf;
}

int main(){
    int temp;
    float tempf;
    
    printf("Escriba una temperatura en C°: ");
    scanf("%d", &temp);
    
    tempf = kelvin(temp);
    
    printf("La temperatura en K° es de: %.2f", tempf);
    
    return 0;
}
