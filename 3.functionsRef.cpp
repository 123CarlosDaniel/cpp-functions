#include <iostream>
#include <string>

using namespace std;

int add(int num1,int num2);
string concat(string, string);

int main(){
  int x{3}, y{6};
  int num = add(x,y);
  cout<<"add : "<<num<<endl;
  cout<<"&num : "<<&num<<endl;
  cout<<"-------------------------"<<endl;
  string str1{"hola"}, str2{"mundo"};
  string str = concat(str1, str2);
  cout<<"concat : "<<str<<endl;
  cout<<"&str : "<<&str<<endl;
}

int add(int num1, int num2) {
  int result = num1 + num2;
  cout<<"&result: "<<&result<<endl;
  return result;
}

string concat(string str1, string str2) {

  string result = str1 + str2;
  cout<<"&result: "<<&result<<endl;
  return result ;
}