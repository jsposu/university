#include <iostream>
using namespace std;
float calcular_promedio(int n){
    int nota, acomulaador = 0;
    float promedio;

    for (int x = 1; x <= n; x = x + 1){
        cout << "Escriba una nota " << x << ": ";
        cin >> nota;
        acomulaador = acomulaador + nota;
    }

    promedio = acomulaador / n;
    return promedio;

}

int main (){
    int n;
    float promedio;

    cout << "cuantas notas desea ingresar?: ";
    cin >> n;

    promedio = calcular_promedio(n);
    cout << "El promedio es: " << promedio;
    return 0;
}
   
