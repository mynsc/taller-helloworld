#include <iostream>
using namespace std;

void imprimir_TT(int n){
    for (int f = 0; f < n; f++) {
        for (int c = 0; c < n; c++){
            if (f == 0) {
                if (( c <= (n - 1) / 2) || c == n - 1) {
                    cout << "*";
                } else {
                   cout << " ";
                }
            } else if (f == (n - 1) / 2) {
                cout << "*";
            } else if (f == n -1) {
                if (c == 0 || c >= (n - 1) / 2) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else if (f < (n - 1) / 2) {
                if (c == f || c == (n - 1) / 2 || c == n - 1 - f || c == n - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else if (f > (n - 1) / 2) {
                if (c == f || c == (n - 1) / 2 || c == n - 1 - f || c == 0) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }    
        }    
        cout << endl;
    }    
}
int main() {
    int n;
    cout << "Ingrese un número impar que sea mayor o igual a 5: ";
    cin >> n;

    if (n % 2 == 1 && n>=5) {
       imprimir_TT(n);
    } else {
        cout << "El número ingresado no es válido." << endl;
    }
    return 0;
}