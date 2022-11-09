#include <iostream>
using namespace std;

void saludar();
int main(){
    double num {7.123};
    double num2 {5.123};
    cout<<max(num2,num)<<endl;
    saludar();
}

int max(int a , int b) {
    if (a>b) {
        return a ;
    } 
    return b;
}

void saludar(){
    cout<<"hola mundo"<<endl;
}