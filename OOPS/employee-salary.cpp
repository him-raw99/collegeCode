#include <iostream>
using namespace std;
class employee
{
private:
    char name[20];
    char emp_id[20];
    float basic_salary;
    float ta;
    float da;
    float hra;
 
public:
    void getdata();
    void showdata();
};
void employee::getdata()
{
    cout << "enter your name: ";
    cin >> name;
    cout << "enter your emp_id: ";
    cin >> emp_id;
    cout << "enter your basic-salary: ";
    cin >> basic_salary;
    cout << "enetr your ta: ";
    cin >> ta;
    cout << "enter your da: ";
    cin >> da;
    cout << "enter your hra: ";
    cin >> hra;
}
void employee::showdata()
{
    cout << "your name: " << name << "\n";
    cout << "your emp_id: " << emp_id << "\n";
    cout << "your basic-salary: " << basic_salary << "\n";
    cout << "your ta: " << ta << "\n";
    cout << "your da: " << da << "\n";
    cout << "your hra: " << hra << "\n";
    cout << "your total salary: " << hra + da + ta + basic_salary << "\n";
}
int main()
{
    employee emp1;
    emp1.getdata();
    cout << " \n \n";
    emp1.showdata();
    return 0;
}
 
 