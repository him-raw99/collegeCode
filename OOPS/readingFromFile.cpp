#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    ifstream in("textFile1.txt");
    getline(in,s);
    cout<<s;
    return 0;
}
