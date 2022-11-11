#include <iostream>

using namespace std;

inline int max(int a , int b ) {
  if (a>b) {
    return a;
  }
  return b;
}

int main(){
  int a{12},b{54}; 
  cout<<"max : "<<max(a,b)<<endl;
  // compiler will replace it with :
  cout<<"max : ";
  if (a>b){
    cout<<a<<endl;
  } else {
    cout<<b<<endl;
  }
}