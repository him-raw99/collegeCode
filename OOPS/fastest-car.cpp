#include <iostream>
using namespace std;
 
class car
{
private:
    int dist, time, speed;
 
public:
    char name[40];
    void getData();
    int calculateSpeed();
};
 
void car::getData()
{
    cout << "enter the name of the car :";
    cin >> name;
    cout << "enter the maximum distance that the car covered (in Km) :";
    cin >> dist;
    cout << "enter the maximum time that the car covered (in Hr) :";
    cin >> time;
}
 
int car::calculateSpeed()
{
    speed = dist / time;
    return speed;
}
 
int main()
{
    car c1, c2;
    c1.getData();
    c2.getData();
    if (c1.calculateSpeed() > c2.calculateSpeed())
    {
        cout << "the faster of the 2 cars is :" << c1.name << "with a speed of " << c1.calculateSpeed();
    }
    else
    {
        cout << "the faster of the 2 cars is :" << c2.name << " with a speed of " << c2.calculateSpeed() << "km/hr";
    }
    return 0;
}
 