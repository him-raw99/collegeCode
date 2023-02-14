#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    ifstream in("textFile1.txt");
    getline(in,s);
    in.close();
    ofstream out("textFile2.txt");
    out<<s;
    out.close();
    return 0;
}
