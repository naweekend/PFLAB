#include <iostream>
using namespace std;

int main()
{
  short age;
  bool isEligible;

  cout << "Enter your age: ";
  cin >> age;

  if (age >= 18)
  {
    isEligible = true;
  }
  else
  {
    isEligible = false;
  }

  if (isEligible)
  {
    cout << "You can vote";
  }
  else
  {
    cout << "You cannot vote";
  }

  return 0;
}