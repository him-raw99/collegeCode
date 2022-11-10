#include <iostream>
using namespace std;
double func(double x)
{
    return 1/(1+(x*x));
}
 
double simpsons_(double ll, double ul,int n)
{
    double h = (ul - ll)/n;
    double x[10], fx[10];
    for (int i = 0; i <= n; i++) {
        x[i] = ll + i * h;
        fx[i] = func(x[i]);
    }
    
    double res = 0;
    for (int i = 0; i <= n; i++) {
        if (i == 0 || i == n)
            res += fx[i];
        else if (i % 2 != 0)
            res += 4 * fx[i];
        else
            res += 2 * fx[i];
    }
    res = res * (h / 3);
    return res;
}
 
int main()
{
    double lower_limit ;
    double upper_limit ;
    cout<<"enter the upper limit :";
    cin>>upper_limit;
    cout<<"enter the lower limit :";
    cin>>lower_limit;
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    cout <<"the output is : "<< simpsons_(lower_limit, upper_limit, n)<<endl;
    return 0;
}
