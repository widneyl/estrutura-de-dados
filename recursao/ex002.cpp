#include <iostream>
using namespace std;

void contador(int num = 10, int cont = 110);


int main(){
    contador();
}

void contador(int num, int cont){
    if(cont == num){
        return;
    }
    else if(cont >= num){
        cout << "err" << endl;
    }
    else{
        cont++;
        cout << cont << endl;
        contador(num, cont);
    }
}