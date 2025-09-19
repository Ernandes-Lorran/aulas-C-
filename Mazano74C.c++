/*c) Ler duas matrizes A e B do tipo vetor com 20 elementos. Construir uma matriz C, onde cada
elemento de C é a subtração do elemento correspondente de A com B. Apresentar a matriz C.*/

#include <iostream>
using namespace std;

int main (){

    int a[20];
    int b[20];
    int c[20];
   
    
    cout <<"digite 20 valores" << endl;
    for (int i = 0; i <20; i++){
        cout << "A[" << i << "] =";
        cin >> a[i];
    }


    cout <<"digite 20 valores" << endl;
    for (int i = 0; i <20; i++){
        cout << "b[" << i << "] =";
        cin >> b[i];
    }

    for (int i = 0; i<20; i++){
        c[i] = a[i] - b[i];
    }
      cout << "\nO vetor C (resultado da subtracao A - B) e:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "C[" << i << "] = " << c[i] << endl;
    }





    return 0;

}

