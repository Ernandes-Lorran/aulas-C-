#include <iostream>
#include <math.h>
#include <iomanip> 
using namespace std ;

int main () {

    double cot, reais, R;

    cout << "digite a cotacao a atual do dolar: " << endl;
    cin >> cot;
    cout << "digite a a quantidade de reais que deseja converter: " << endl;
    cin >> reais;
    R = reais / cot;

    cout << fixed << setprecision(2);
    cout << "a quantidade convertida em reais e : " << R;




    return 0;
}