#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz"; 
        }
        if (i % 3 == 0 && i % 5 != 0){
            cout << "Fizz";
        }        
        if (i % 3 != 0 && i % 5 == 0){
            cout << "Buzz";
        }        
        if (i % 3 != 0 && i % 5 != 0){
            cout << i;
        }
        cout << "\n";
        

    }


}
int main()