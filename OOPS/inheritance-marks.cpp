#include <iostream>
using namespace std;
class student
{
    char name[30];
    int rollno;

public:
    void input()
    {
        cout << "Enter your name :";
        cin >> name;
        cout << "Enter your roll no :";
        cin >> rollno;
    }
    void output()
    {
        cout << "name of the student :" << name << endl;
        cout << "roll no of the student :" << rollno << endl;
    }
};
class exam : public student
{
    float marks[5];

public:
    void getdata();
    void showdata();
};
void exam::getdata()
{
    cout << "-----------------D E T A I L S--------------------\n";
    input();
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the marks of subject " << i + 1 << " :";
        cin >> marks[i];
    }
}
void exam::showdata()
{
    cout << "-----------------R E S U L T--------------------\n";
    output();
    float result = 0;
    for (int i = 0; i < 5; i++)
    {
        result += marks[i];
    }
    cout << "your result is : " << result / 5 << "%";
}
int main()
{
    exam e;
    e.getdata();
    e.showdata();
    return 0;
}