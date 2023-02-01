#include <bits/stdc++.h>
#define f(x) 1 / (1 + pow(x, 2))
using namespace std;
int main()
{
  float lower, upper, intg = 0.0, h, k;
  int i, n;
  cout << setprecision(6) << fixed;
  cout << "Enter the upper limit: ";
  cin >> upper;
  cout << "Enter the lower limit: ";
  cin >> lower;
  cout << "Enter the sub interval: ";
  cin >> n;
  h = (upper - lower) / n;
  intg = f(upper) + f(lower);
  for (i = 1; i <= n - 1; i++)
  {
    k = lower + i * h;
    intg = intg + 2 * (f(k));
  }
  intg = (intg * h) / 2;
  cout << endl
       << "Required value of integration: " << intg;
  return 0;
}