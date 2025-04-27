#include <iostream>

using namespace std;

void imprimir(int n) {
    for (int f = 0; f < n; f++) {
        for (int c = 0; c < 3 * n - 2; c++) {
            if (f == 0) { // Primera fila
                if (c % 2 == 0 && c <= 2 * n - 2) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else if (f == n - 1) { // Última fila
                if (c % 2 == 0 && c >= n - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else { // Filas intermedias
                if (c == f || c == 2 * (n - 1) - f || c == 2 * (n - 1) + f) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        } // Fin del bucle de las columnas
        cout << endl;
    } // Fin del bucle de las filas
}

int main() {
    int n;

    cout << "Ingrese un número impar que sea mayor o igual a 5: ";
    cin >> n;

    if (n % 2 == 1 && n >= 5) {
        imprimir(n);
    } else {
        cout << "EL número ingresado no es válido" << endl;
    }
    
    return 0;
}