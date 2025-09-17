//b) Ler 8 elementos em uma matriz A tipo vetor. Construir uma matriz B de mesma dimensão com os
//elementos da matriz A multiplicados por 3. O elemento B[i] deverá ser implicado pelo elemento
//A[i]*3, o elemento B[2] implicado pelo elemento A[2]*3 e assim por diante, até 8. Apresentar o vetor B.
#include <iostream>
using namespace std;

int main() {
    int A[8]; 
    int B[8]; 

    // Ler os 8 valores para A
    cout << "Digite 8 valores para o vetor A:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    // Construir o vetor B (A[i] * 3)
    for (int i = 0; i < 8; i++) {
        B[i] = A[i] * 3;
    }

    // Mostrar o vetor B
    cout << "\nVetor B (A[i] * 3):" << endl;
    for (int i = 0; i < 8; i++) {
        cout << "B[" << i << "] = " << B[i] << endl;
    }

    return 0;
}
