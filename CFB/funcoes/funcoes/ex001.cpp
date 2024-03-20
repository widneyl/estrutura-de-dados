#include <iostream>
using namespace std;

void text();
int sumInt(int n1, int n2);

int main(){
    text();
    cout << sumInt(2,2) << endl;
}

int sumInt(int n1, int n2){
    return n1+n2;
}
void text(){
   cout << "O resultado foi: ";
}