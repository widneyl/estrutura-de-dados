#include <iostream>
using namespace std;

void sufixos(char *p){
    
    if(*p == '\0'){
        return;
    }
    else{
        sufixos(p+1);  
        cout << p << endl;  
    }
}

int main(){
    char entrada[100];
    cin >> entrada;

    sufixos(entrada);

}