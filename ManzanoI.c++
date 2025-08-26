#include <iostream>
#include <math.h>

using namespace std; 

int main (){

    double A, B, res;

    cout << "digite o valor de a : " << endl;
    cin >> A ;
    cout << "digite o valor de b : " << endl;
    cin >> B ;
    
  res = (A - B) * (A - B);
  cout << "O quadrado da diferença entre A e B é: " << res << endl;
    return 0;
}