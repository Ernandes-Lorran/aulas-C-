#include <math.h>
#include <iostream>
using namespace std; 

int main (){

    double T, V, D, LtUsa ;
    
    cout << "digite om tempo gasto na viagem\n";
    cin >>  T;
    cout << "digite a velocidade\n";
    cin >> V; 

    D = T * V;

    LtUsa = D/ 12;


    cout << "o carro gastou: " << LtUsa << endl;
    cout << "tempo gasto: " << T << endl;
    cout << "Distancia percorrida: " << D << endl;
    cout << "velocidade media: " << V << endl;




    
    
    return 0; 

}