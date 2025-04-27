#include <iostream>
using namespace std;

void imprimir_z(int n){
    for (int f = 0; f < n; f++) {
        for (int c = 0; c < n; c++){
            if (f == 0 || f == n - 1){ // Primera y última fila
                cout << "*";
            } else { // Filas intermedias
                if (c == n - 1 - f) { 
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        } // Fin del bucle de las columnas
        cout << endl;
    }  // Fin del bucle de las filas  
}
int main() {
    
    int n;

    cout << "Ingrese un número impar que sea mayor o igual a 3: ";
    cin >> n;

    if (n % 2 == 1 && n>=3) {
       imprimir_z(n);
    } else {
        cout << "El número ingresado no es válido." << endl;
    }
    return 0;
}