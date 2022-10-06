 
#include <iostream>
using namespace std;
 
class factorial
{
public:
    int factorialOf(int n);
};
 
int factorial::factorialOf(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorialOf(n - 1);
}
 
int main()
{
    factorial f;
    int n;
    cout << "enter the no. whose factorial you want:";
    cin >> n;
    cout << f.factorialOf(n);
 
    return 0;
}
 