#include <iostream>
using namespace std;

int main()
{
  short radius;
  const float PI = 3.14159;

  cout << "Enter radius of circle: ";
  cin >> radius;

  float circumference = 2 * PI * radius;

  cout << "Circumference of circle is: " << circumference;

  return 0;
}