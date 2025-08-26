#include <iostream>
#include <cmath>

using namespace std; 

int main (){

    double A, B,C, res;

    cout << "digite o valor de a : " << endl;
    cin >> A ;
    cout << "digite o valor de b : " << endl;
    cin >> B ;
    cout << "digite o valor de c : " << endl;
    cin >> C ;
  res = pow(A, 2) + pow(B, 2) + pow(C, 2);

  cout << " O quadrado da diferença entre A² + B² + C² e : " << res << endl;
    return 0;
}


