#include <concepts>
#include <iostream>
// https://en.cppreference.com/w/cpp/concepts

/*
ways of writing templates with concepts
syntax 1 
template <typename T>
requires std::integral<T>
T add(T a, T b) {
  return a +b;
} 
syntax 2 
template <std::integral T>
T add(T a, T b){}
syntax 3 
auto add(std::integral auto a , std::integral auto b){ return a + b;}
syntax 4 
template <typename T>
T add(T a, T b) requires std::integral <T> { return a+b;}
*/

template <typename T> 
requires std::integral<T>
T add( T a, T b) {
  return a + b;
}


int main(){

  std::cout << add(123,213)<<std::endl;

}