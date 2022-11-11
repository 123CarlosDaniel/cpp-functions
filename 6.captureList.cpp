#include <iostream>

using namespace std;

int main() {
  int a {23};
  int b {22};
  // by value
  auto func = [a,b](){
    return a + b;
  };
  // by reference 
  auto func2 = [&a,&b](){
    return a +b ;
  };
  // capture all by value
  auto func3 = [=](){
    return a+b;
  };
  // capture all by reference
  auto func4 = [&](){
    return a + b;
  };
  a = 200;
  b = 100;
  cout<<"result : "<<func()<<endl;
  
  cout<<"result : "<<func2()<<endl;

}