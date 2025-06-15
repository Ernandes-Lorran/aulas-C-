#include <iostream>
#define N 2
#define M 3
using namespace std;

int matriz[N][M];
void carregaMatriz();
void mostraMatriz();
int calculaSoma(int x);

int main(){

carregaMatriz();
mostraMatriz();
int soma = calculaSoma(0);
cout << soma;

return 0;
}

void carregaMatriz(){
int aux;

    for(int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cout << "Digite um valor" << endl;
            cin >> aux;
            matriz[i][j] = aux;
        }
    }
}

void mostraMatriz(){

    for(int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cout << matriz[i][j] << endl;
        }
    }
}

int calculaSoma(int x){

x = 0;

    for(int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            x = x + matriz[i][j];
        }
    }

return x;

}