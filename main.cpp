#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    
    cout << "\nDigite o Valor do lado do Triangulo A" ;
    cin>>a;

    cout << "\nDigite o Valor do lado do Triangulo B" ;
    cin>>b;

    cout << "\nDigite o Valor do lado do Triangulo C" ;
    cin>>c;

    if(a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            cout << "\nOs lados formam um Triangulo Equilatero\n";
        } else if (a == b || a == c || b == c) {
            cout << "\nOs lados formam um Triangulo Isosceles\n";
        } else {
            cout << "\nOs lados formam um Triangulo Escaleno\n";
        }
    } else {
        cout << "\nOs lados não formam um Triangulo";
    }



    return 0;
}
