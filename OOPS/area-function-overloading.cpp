#include <iostream>
#include <cmath>
using namespace std;
 
class shape
{
public:
    void area(int a);
    void area(int a, int b);
    void area(int a, int b, int c);
};
 
void shape::area(int a)
{
    cout << " :" << 3.14 * a << endl;
}
void shape::area(int a, int b)
{
    cout << " :" << b * a << endl;
}
void shape::area(int a, int b, int c)
{
    int s = (a + b + c) / 2;
    int arr = s * (s - a) * (s - b) * (s - c);
    cout << " :" << sqrt(arr) << endl;
}
 
int main()
{
    shape circle, triangle, rectangle;
    cout << "area of circle";
    circle.area(4);
    cout << "area of rectangle";
    rectangle.area(4, 5);
    cout << "area of tirangle";
    triangle.area(3, 4, 5);
    return 0;
}
 