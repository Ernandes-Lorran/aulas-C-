/*Ler 15 elementos de uma matriz tipo vetor. Construir uma matriz B de mesmo tipo, observando 
a seguintes lei de formação: "Todo elemento de B deverá ser o quadrado do elemento de A correspondente".
SS Apresentar as matrizes A e B."*/

#include <iostream>

using namespace std ;


int main () {

    double a[20];
    double b[20];

    cout << "digite os valores da primeira matriz A" << endl;
    for (int i = 0; i < 20; i++){
        cout << "a[" << i << "] =";
        cin >> a[i];
    }

    for(int i = 0; i <20; i++){
    b[i] = a[i] * a[i];
    }
     
    cout << "\nValores de A e B: \n";
    for (int i = 0; i <20; i++){
        cout << "A[" << i << "] = " << a[i]
         << "  |  B[" << i << "] = " << b[i] << endl;
    }



    return 0;
}