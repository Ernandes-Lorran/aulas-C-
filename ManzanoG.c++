 #include <iostream>
 #include <math.h>

 using namespace std;

 int main (){

 double a, b, c, d, s1, s2, s3, s4, s5, s6, mult1, mult2, mult3, mult4 , mult5, mult6;

 cout << "digite o valor de a " << endl;
 cin >> a;
 cout << "digite o valor de b " << endl;
 cin >> b ;
 cout << "digite o valor de c " << endl;
 cin >> c;
 cout << "digite o valor de d " << endl;
 cin >> d;

 s1 = a + b; 
 s2 = a + c;
 s3 = a + d;
 s4 = b + c;
 s5 = b + d;
 s6 = c + d;

 mult1 = a * b; 
 mult2 = a * c;
 mult3 = a * d;
 mult4 = b * c;
 mult5 = b * d;
 mult6 = c * d;

 cout << "o resultado e : " << s1 << endl;
 cout << "o resultado e : " << s2 << endl;
 cout << "o resultado e : " << s3 << endl;
 cout << "o resultado e : " << s4 << endl;
 cout << "o resultado e : " << s5 << endl;
 cout << "o resultado e : " << s6 << endl;
 cout << "o resultado e : " << mult1 << endl;
 cout << "o resultado e : " << mult2 << endl;
 cout << "o resultado e : " << mult3 << endl;
 cout << "o resultado e : " << mult4 << endl;
 cout << "o resultado e : " << mult5 << endl;
 cout << "o resultado e : " << mult6 << endl;
 

    return 0;
 };