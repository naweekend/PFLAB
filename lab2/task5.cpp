#include <iostream>
using namespace std;

int main()
{
  float width;
  float height;

  cout << "Enter width of rectangle: ";
  cin >> width;

  cout << "Enter height of rectangle: ";
  cin >> height;

  float area = width * height;
  float perimeter = 2 * (width + height);

  cout << "Area of rectangle is " << area << endl;
  cout << "Perimeter of rectangle is " << perimeter << endl;

  return 0;
}