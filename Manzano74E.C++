/*e) Ler duas matrizes A e B do tipo vetor com 15 elementos cada. Construir uma matriz C, sendo esta a
junção das duas outras matrizes. Desta forma, C deverá ter o dobro de elementos, ou seja, 30.
Apresentar a matriz C.*/

# include <iostream>

using namespace std;

int main (){

    double a[15];
    double b[15];
    double c[30];

    cout << "valores para a primeira matriz"<<endl;
    for (int i= 0; i <15; i++){
        cout << "[a" << i << "]" ;
        cin >> a[i] ;
    }

    cout << "digite os valores da segunda matriz" <<endl;
    for (int i = 0; i <15; i ++){
    cout <<"[b" << i << "]";
    cin >> b[i];
    }

    for(int i = 0; i < 15; i++){
        c[i] = a[i];
    }
     for(int i = 0; i < 15; i++){
        c[i +3] = b[i];
    }

    cout << "o valor da matriz c e: " << endl;
    for (int i = 0; i < 30; i++){
        cout << "[c" << i << "]" << c[i]<< endl;
    }
   
        

    return 0;
}