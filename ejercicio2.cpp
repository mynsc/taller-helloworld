#include <iostream>
using namespace std;

void imprimir_z(int n){
    for (int f = 0; f < n; f++) {
        for (int c = 0; c < n; c++){
            if (f == (n - 1) / 2){
                cout << "*";
            } else {
                cout << "o";
            }
        }
        cout << endl;
    }    
}
int main() {
    int n;
    cout << "Ingrese un número impar y mayor igual que 5: ";
    cin >> n;

    if (n % 2 == 1 && n>=5) {
       imprimir_z(n);
    } else {
        cout << "El número ingresado no es válido." << endl;
    }
    return 0;
}