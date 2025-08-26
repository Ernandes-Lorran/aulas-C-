#include <iostream>
#include <math.h>
using namespace std ;

int main () {

    double cot, dol, R;

    cout << "digite a cotacao a atual do dolar: " << endl;
    cin >> cot;
    cout << "digite a a quantidade de dolares que deseja converter: " << endl;
    cin >> dol;
    R = dol * cot;

    cout << "a quantidade convertida em reais e : " << R;




    return 0;
}