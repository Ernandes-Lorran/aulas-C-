#include <iostream>
#define N 10
using namespace std;

void carregarVetor(int carregaVetor[], int tamanho);
void mostraVetor(int vet[], int tamanho);
void mostraElementoPar(int vet[], int tamanho);
void mostraElementoImpar(int vet[], int tamanho);

int main() {
    int vetorA[N];
    carregarVetor(vetorA, N);
    mostraVetor(vetorA, N);
    mostraElementoPar(vetorA, N);
    mostraElementoImpar(vetorA, N);  // Opcional, se quiser mostrar ímpares também
    return 0;
}

void carregarVetor(int carregaVetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o valor: ";
        cin >> carregaVetor[i];
    }
}

void mostraVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vet[i] << endl;
    }
}

void mostraElementoPar(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] % 2 == 0) {
            cout << vet[i] << " é par" << endl;
        }
    }
}

void mostraElementoImpar(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] % 2 != 0) {
            cout << vet[i] << " é ímpar" << endl;
        }
    }
}
