#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
using namespace std;
#define f(x, y) (y * y - x * x) / (y * y + x * x)

int main()
{
  float x0, y0, xn, yn, h, k, k1, k2, k3, k4;
  int i, n;
  cout << "Enter initial Condition : " << endl;
  cout << "x0: ";
  cin >> x0;
  cout << "y0: ";
  cin >> y0;
  cout << "Enter calculation point: ";
  cin >> xn;
  cout << "Enter the step size: ";
  cin >> n;
  h = (xn - x0) / n;
  cout << "\nx0\ty0\tyn\n";
  cout << "______________________________________\n";
  for (i = 0; i <= n; i++)
  {
    k1 = h * (f(x0, y0));
    k2 = h * (f((x0 + h / 2), (y0 + k1 / 2)));
    k3 = h * (f((x0 + h / 2), (y0 + k2 / 2)));
    k3 = h * (f((x0 + h), (y0 + k3)));
    k = (k1 + 2 * k2 + 2 * k3 + k4) / 6;
    yn = y0 + k;
    cout << x0 << "\t" << y0 << "\t" << yn << endl;
    x0 = x0 + h;
    y0 = yn;
  }
  cout << "\nThe value of y at x= " << xn << " is: " << yn;
  return 0;
}