#include <iostream>
using namespace std;

void quadrado2(int n){
    if(n == n*n){
        return;
    }
    else{
        int res = (n-1)*(n-1) + 2*n-1 + 1;
        cout << n << "^2 = " << n-1 << "^2 + " << "2*" << n-1 << " + 1 = " << res << endl;
        quadrado2(n+1);

    }
}

void quadrado(int n){
    if(n == 1){
        cout << "1^2 = 1" << endl;
        return;
    }
    else{
        int res = (n-1)*(n-1) + 2*n-1 + 1;
        cout << n << "^2 = " << n-1 << "^2 + " << "2*" << n-1 << " + 1 = ?" << endl;
        quadrado(n-1);

    }
}
int main(){
    int n;
    cin >> n;
    quadrado(n);
    
}