#include <bits/stdc++.h>
#define f(x) 3 * x - cos(x) - 1
#define g(x) 3 + sin(x)

using namespace std;
int main()
{
  float x0, x1, f0, f1, g0, e;
  int step = 1, N;
  cout << setprecision(6) << fixed;
  cout << "Enter the initial guess: ";
  cout << "x0= ";
  cin >> x0;
  cout << "Enter The tolerable error : ";
  cin >> e;
  cout << "Enter The maximum iteration : ";
  cin >> N;
  cout << endl;
  do
  {
    g0 = g(x0);
    f0 = f(x0);
    if (g0 == 0.0)
    {
      cout << "Mathematical error: " << endl;
      exit(0);
    }
    x1 = x0 - f0 / g0;
    cout << "iteration: " << step << ":\tx= " << setw(10) << x1 << "and f(x)= " << setw(10) << f(x1) << endl;
    x0 = x1;
    step++;
    if (step > N)
    {
      cout << "Not convergent";
      exit(0);
    }
    f1 = f(x1);
  } while (fabs(f1) > e);
  cout << endl
       << "Root is: " << x1 << endl;
  return 0;
}