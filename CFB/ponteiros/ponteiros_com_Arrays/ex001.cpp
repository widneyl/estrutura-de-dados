#include <iostream>
using namespace std;

int main(){

    int *p;
    int vetor[10];

    p=&vetor[0]; //p recebebndo o endereço da primeira posição do vetor
    cout << p << endl;
    
    p=&vetor[1]; //p recebebndo o endereço da segunda posição do vetor
    cout << p << endl;

    //Fazendo incremento
    *(p++); //incremento de ponteiro
    cout << p << endl;

    *p=10;
    cout << vetor[2] << endl;

    //Fazendo incremento com laço de repetição
    
    int *pont;
    int cont[10];

    pont=&cont[0];

    for(int i=0; i<10; i++){
        *pont=i;
        cout << cont[i] << endl;
        *(pont++);

    }
}
 