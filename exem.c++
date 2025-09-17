#include <iostream>  

using namespace std ;

int main () {

    double a, b,c ;

    cout << "digite tres numeros";
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b && a > c){
        cout << "o numero mais alto e " << a << endl ;
    }
    else if (b > c) {
        cout << "o mais alto e o " << b << endl;
    }
    else {
        cout << "o numero mais alto e  " << c << endl;
    }
    
    
    return 0;

}