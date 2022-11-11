#include <iostream>

using namespace std;

int increment() {
  static int counter {};
  counter++;
  return counter;
}

int main() {
  for(size_t i {};i<10;i++){
    cout<<increment()<<endl;
  }
}