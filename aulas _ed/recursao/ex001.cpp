#include <iostream>
using namespace std;

int somatorio(int n){
    if(n == 1){
        return 1;
    }
    else{
        cout << "numero atual: " << n << " somando " << n << " com " << n-1 << " = " << n+n-1 << endl;
        return somatorio(n-1)+n;
    }
}

int main(){
    int sum = somatorio(30);
    cout << sum << endl;
}