#include <iostream>
using namespace std;

int main() {
    int codigo, b, c;
    
    cout << "\nDigite o codigo do produto" ;
    cin>>codigo;

    

    switch (codigo) {
        case 1:
            cout << "\nSUL\n ";
            break;
        case 2:
            cout << "\nNORTE\n ";
            break;
        case 3:
            cout << "\nLESTE\n "; 
            break;
        case 4:
            cout << "\nOESTE\n ";
            break;
        default:
            cout << "\nCodigo invalido\n ";
            return 0;
    }
      
}