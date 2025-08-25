#include <iostream>
#include <math.h>

using namespace std;

int main (){


   double prestacao, val, taxa, T ;
   
   cout << "digite o valor da prestacao: " << endl;
   cin >> val ;
   cout << "digite o valor da taxa: " << endl ;
   cin >> taxa;
   cout << "digite o tempo em meses da prestacao:  " << endl ;
   cin >> T;

   prestacao = val + (val * taxa/100* T); 

   cout << "o valor da prestacao com a taxa fica: " << prestacao;
   




    return 0;
}