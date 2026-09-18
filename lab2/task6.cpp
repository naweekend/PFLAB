#include <iostream>
using namespace std;

int main()
{
  float a;
  float b;
  float temp;

  cout << "Enter first number (variable a): ";
  cin >> a;

  cout << "Enter second number (variable b): ";
  cin >> b;

  temp = a;
  a = b;
  b = temp;

  cout << "After swapping, value of variable a is " << a << " and value of variable b is " << b << endl;

  return 0;
}