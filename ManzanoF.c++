#include <math.h>
#include <iostream>

using namespace std;

int main () {

    string a, b, tempo;

    cout << "digite a primeira variavel: ";
    cin >> a
    cin.ignore();
    cout << "digite a segunda variavel: ";
    cin >> b;

    tempo = a ;
    a = b ;
    b = tempo; 

    cout << "Os valores trocados sao: A = " << a << " e B = " << b;



    return 0;
}