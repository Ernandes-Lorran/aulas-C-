/*Ler duas matrizes do tipo vetor, sendo A com 20 elementos e B com 30 elementos. Construir uma
matriz C, sendo esta a junção das duas outras matrizes. Desta forma, C deverá ter a capacidade de
armazenar 50 elementos. Apresentar a matriz C.*/
# include <iostream>

using namespace std;


int main (){

    double a[20];
    double b[30];
    double c[7];

    cout <<"digite os valores de a" <<endl;
    for (int i = 0; i < 20; i++){
    cout << "[a" << i << "]";
    cin >> a[i];
    }

    cout <<"digite os valores de b" <<endl;
    for (int i = 0; i < 30; i++){
    cout << "[b" << i << "]";
    cin >> b[i];
    }

    for (int i = 0; i < 20; i++){
        c[i] = a[i];
    }

    for (int i = 0; i < 30; i++){
        c[i+3] = b[i];
    }

    cout << "o valor de da matriz c e: "<< endl;
    for(int i = 0; i < 50; i++){
        cout << "[c" << i << "] =" << c[i] << endl;
    }





    return 0 ;
}