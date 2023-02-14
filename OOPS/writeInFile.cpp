#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s="hello world ~ text file edition ~";
    ofstream out("textFile1.txt"); //creates too if it doesnt exists
    out<<s;
    return 0;
}
