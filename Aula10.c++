#include <iostream> 
#include <cstdlib>
using namespace std ;

int main(){

    int n1, n2, res;
    char opc;
   

    inicio:
    system("cls"); /*comando para limpar a tela do dos*/

    cout << "digite o valor da nota 1:" ;
    cin >> n1;
    cout <<"digite o valor da nota 2:" ;
    cin >> n2;

    res = n1 + n2;
    /* NOTAS 
    
    >=60 Aprovado
    >=40 e <60 recuperacao
    <40 reprovado
    
    */

    if(res >= 60){
        cout << "\nAluno APROVADO \n";
    }else if (res >= 40) {
        cout << "\nAluno RECUPERCAO\n";
    }
    else {
        cout << "\nAluno reprovado\n";
    }
    

    cout <<"\n Digitar outras notas? [s/n]:";
    cin >>opc;

   if(opc == 's' or opc=='S'){
    goto inicio;
   }
     

    return 0;
}