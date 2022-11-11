#include <iostream>

using namespace std;

int main() {
  auto func = []() -> void{
    cout<<"hello world"<<endl;
  };
  func();
  auto func2 = [](int a , int b) -> int {
    return a + b;
  }(3,2);
  cout<<"func 2 : "<<func2<<endl;
}