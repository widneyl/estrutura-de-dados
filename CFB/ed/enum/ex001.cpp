//"enum" (abreviação de "enumeration") em C++ é uma estrutura de dados usada para definir 
// tipos de dados que consistem em um conjunto de constantes nomeadas. Isso é útil quando você 
// tem um conjunto fixo de valores que uma variável pode ter. Por exemplo, se você estiver escrevendo 
// um programa e precisar representar os dias da semana, poderia usar um enum para isso.

#include <iostream>
using namespace std;

enum armas{
    pistola,
    revolver,
    escopeta,
    fuzil
};

enum dias{
    segunda,
    terça,
    quarta,
    quinta,
    sexta
};

int main(){
    dias dia = terça;
    cout << dia << endl;

    armas arma = fuzil;
    cout << arma << endl;
}