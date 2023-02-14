#include <iostream>
using namespace std;

class a{
    protected:
        int a=10;
};

class b:protected a {
    public:
        void display(){
            cout<<a<<endl;
        }
};

class c:public b {
    public:
        void displayc(){
            cout<<a<<endl;
        }
};

int main()
{
    c c1;
    b b1;
    b1.display();
    c1.displayc();
    return 0;
}
