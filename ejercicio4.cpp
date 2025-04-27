#include <iostream>
using namespace std;

void imprimir_TT(int n){
    for (int f = 0; f < n; f++) {
        if (f == 0) {
            for (int c = 0; c < n; c++) {
                if (c <= (n - 1) / 2 || c == n - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }   else if ( f == c || c == (n - 1) / 2 || f == n - c - 1 || c == n - 1) {
            for (int c = 0; c < n; c++) {
                if ( f == c || c == (n - 1) / 2 || f == n - c - 1 || c == n - 1) {
                if (( f == c || c == (n - 1) / 2 || f == n - c - 1 || c == n - 1) && (f < (n - 1) / 2)) {
                    cout << "x";
                } else {
                    cout << "o";
                }
            }
        }
        }  if (f == (n - 1) / 2) {
            cout << "*";
        } else if (f == n - 1) {
            for (int c = 0; c < n; c++) {
                if (c >= (n - 1) / 2 || c == 0) {
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