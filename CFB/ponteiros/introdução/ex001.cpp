#include <iostream>
using namespace std;

// O ponteiro armazena o endereço de outra variavel

// O operador de ponteiro * 
// O operador de endereço de memoria &

int main(){
    int x = 5;
    int *pn = &x; // Atribuindo o endereço da variavel x
    cout << pn << endl; //Imprimindo o endereço de memoria
    cout << *pn << endl; //Imprimindo o valor da variavel que esta no endereço que o ponteiro aponta

    *pn = 7; //Modificando o valor da variavel x atraves do ponteiro

    cout << pn << endl;
    cout << *pn << endl;
    
}
