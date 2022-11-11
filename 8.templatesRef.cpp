#include <iostream>

using namespace std;

template <typename T> const T& maximum(const T& a , const T& b);

int main(){
  int a {123}, b {56};
  cout << "Referencia a : "<<&a<<endl;
  cout << "Max : "<<maximum(a,b)<<endl;
}

template <typename T> const T& maximum(const T& a , const T& b) {
  cout << "Reference a : "<<&a<<endl;
  return (a>b) ? a : b;
}
