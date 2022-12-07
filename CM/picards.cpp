#include <iostream>
using namespace std;
double firstorder(double x0, double y0)
{
    return x0 + y0;
}

double secondorder(double x0, double y0)
{
    return (firstorder(1, firstorder(x0, y0)));
}

double remorder()
{
    return 2;
}

int main()
{
    double x0, y0, h, x1;
    cout << "enter the value of x0 : ";
    cin >> x0;
    cout << "enter the value of y0 : ";
    cin >> y0;
    cout << "enter the value of x1 : ";
    cin >> x1;
    h = x1 - x0;
    double y1;
    y1 = y0 + h * firstorder(x0, y0) + (h * h / 2) * secondorder(x0, y0) + (h * h * h / 6) * remorder() + (h * h * h * h / 24) * remorder() + (h * h * h * h * h / 120) * remorder();
    cout << "The value of differential equation dy/dx = x + y is : " << y1;
    return 0;
}