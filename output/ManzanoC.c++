#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14

int main (){
    
    double vol, alt, raio;


    cout << "digite o raio";
    cin >> raio;

    cout << "digite o valor da altura";
    cin >> alt;

    vol = PI* pow(raio, 2)* alt; 
    
    cout << "ö vol e " << vol << endl;
    
  

return 0;
}