#include <iostream>
#include <iomanip>

#include <math.h>

using namespace std;

int main () {
double vol, comp, larg, altu;

cout << "diigte o valor do comprimento: ";
cin >> comp;
cout << "digite o valor do larg: ";
cin >> larg; 
cout << "digite o valor da altura: ";
cin >> altu ;

vol = comp * larg *  altu; 

 cout << "o valor do volume do objeto e : " << vol ;

 return 0 ;
}