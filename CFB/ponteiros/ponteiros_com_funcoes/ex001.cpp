#include <iostream>
using namespace std;

void somar(float *num, float value);
void add(int *v);

int main(){
    float var = 2;
    somar(&var, 3);
    cout << var << endl;

    int vetor[3];
    add(vetor); //Não e nessesario passar o endereço do vetor usando o '&' quando se trata de um array

    for(int i=0; i<3; i++){
        cout << vetor[i] << endl;
    }

}

void somar(float *num, float value){ //soma um valor com outro
    *num+=value;
}

//Passando um ponteiro de array para o parametro
void add(int *v){
    v[0] = 10;
    v[1] = 32;
    v[2] = 94;
}