#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]){
    
    if(argc > 1){
        if(!strcmp(argv[1], "y")){
            cout << "yes" << endl;
        }
        else if(!strcmp(argv[1], "n")){
            cout << "not" << endl;
        }
        else{
            cout << "what?" << endl;
        }
    }
    
    system("pause");
}