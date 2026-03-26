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
        case 5:
        case 6:
            cout << "\nNORDESTE\n ";
            break;
        case 7:
        case 8:
        case 9:
            cout << "\nSUDESTE\n ";
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        
        case 20:
            cout << "\nCENTRO OESTE\n ";
            break;
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
            cout << "\nNOROESTE\n ";
            break;

        default:
            cout << "\nCodigo invalido\n ";
            return 0;
    }
      
}