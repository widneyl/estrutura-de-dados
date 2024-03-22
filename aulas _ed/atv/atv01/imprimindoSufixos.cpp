#include <iostream>
using namespace std;

char sufixos(char p[]){
    if(p == 0){
        return p;
    }
    else{
        cout << p << endl;
        sufixos(p+1);
    }
}

int main(){
    char palavra[] = "Ola";
    sufixos(palavra);
}