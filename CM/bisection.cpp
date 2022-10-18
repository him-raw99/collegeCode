#include <iostream>
#include <iomanip>
 
using namespace std;
using std::setprecision;
float sol(float a){
    return ((a*a*a)-(4*a)-9);
}
 
float mean(float a, float b){
    return (a+b)/2;
}
 
void solve(float a, float b){
    while ((b-a)>0.001){
        float average = mean(a,b);
        if(sol(average)<0){
            a=average;
        }
        else if (sol(average)>0){
            b=average;
        }
        else{
            cout<<"a is root";
        }
    }
    cout<<"------------------------------------------------------------------------------------------------------------------\n";
    cout << "root of the eqaution x^3-4x-9=0 correct to 3 decimal places by Bisection method is :"<<setprecision(4) << a;
}
 
int main(){
    cout<<"------------------------------------------------------------------------------------------------------------------\n";
    cout<<"name: HIMANSHU \t class:IT-B G2 \t enrollment no:08020803121"<<endl;
    int i=0;
    while (true){
        if((sol(i-1)<0)&&(sol(i)>0)){
            solve(i-1,i);
            break;
        }
        else{
            i++;
        }
    }
    return 0;
}