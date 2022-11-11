#include <iostream>
#include <string>

using namespace std;

int max(int a, int b);
double max(double a, double b);
string max(string, string);
int main()
{

  int int_a{45}, int_b{123};
  double dbl_a{213.2}, dbl_b{123.2};
  string str_a{"hola"}, str_b{"pepepe"};

  cout << "max int : " << max(int_a, int_b) << endl;
  cout << "max double: " << max(dbl_a, dbl_b) << endl;
  cout << "max string: " << max(str_a, str_b) << endl;
}

int max(int a, int b)
{
  return (a > b) ? a : b;
}

double max(double a, double b)
{
  return (a > b) ? a : b;
}

string max(string a, string b)
{
  return (a > b) ? a : b;
}