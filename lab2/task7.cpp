#include <iostream>
using namespace std;

int main()
{
  float celsius;

  cout << "Enter temperature in celsius: ";
  cin >> celsius;

  float fahrenheit = (celsius * 9 / 5) + 32;

  cout << "Temperature in fahrenheit is " << fahrenheit << endl;
}