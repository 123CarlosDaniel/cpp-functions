#include <iostream>

using namespace std;

size_t add_secuencial(size_t val) {
  if (val == 0) return 0;
  return val + add_secuencial(val-1);
}
int main() {
  cout<<"suma : "<<add_secuencial(10)<<endl;

}