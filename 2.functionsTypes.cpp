#include <iostream>
#include <string>

using namespace std;

void max_str(const string input1, const string input2, string &output);
void max_int(int input1, int input2, int &output);
void max_dbl(double input1, double input2, double* output);

int main()
{
  string out_str;
  string string1("Casablanca");
  string string2("Bellevue");
  string string3{"hola pepe"};

  int input1{13}, input2{24}, out_int;
  double inp1{20.2}, inp2{12.2}, out_dbl;

  max_str(string1, string2, out_str);
  cout << "max_str: " << out_str << endl;
  cout << "string3: " << string3 << endl;
  cout << "---------------------" << endl;
  max_int(input1, input2, out_int);
  cout << "max_int: " << out_int << endl;
  cout << "--------------------------" << endl;
  max_dbl(inp1, inp2, &out_dbl);
  cout << "max_dbl: " << out_dbl << endl;
}

void max_str(const string input1, const string input2, string &output)
{
  if (input1 > input2)
  {
    output = input1;
    return;
  }
  output = input2;
}

void max_int(int input1, int input2, int &output)
{
  if (input1 > input2)
  {
    output = input1;
    return;
  }
  output = input2;
}

void max_dbl(double input1, double input2, double* output)
{
  if (input1 > input2)
  {
    *output = input1;
    return;
  }
  *output = input2;
}
