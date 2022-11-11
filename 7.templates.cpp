#include <iostream>
#include <string>

using namespace std;

template <typename T> T maximum(T a , T b) {
  return (a>b) ? a : b;
}

int main(){
  int a{123}, b{13} ;
  double c{12.23} , d{45.45};
  string e{"hola mundo"}, f{"hola"};

  cout<< "max int : "<<maximum(a,b)<<endl;
  cout<< "max double: "<<maximum(c,d)<<endl;
  cout<< "max string: "<<maximum(e,f)<<endl;
  maximum<double>(a,b); // explicit template arguments

}
