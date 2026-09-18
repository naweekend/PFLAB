#include <iostream>
using namespace std;

int main()
{
  double distance;
  double time;

  cout << "Enter distance in meters: ";
  cin >> distance;

  cout << "Enter time in seconds: ";
  cin >> time;

  double speed = distance / time;

  cout << "Speed is " << speed << " meters/second";

  return 0;
}