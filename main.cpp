#include <iostream>
#include <string>
#include <thread>
#include <climits>

using namespace std;

int mk = 0;

class CPerson
{
private:
    long long weight;   //unit:kg
    string name;
public:
    CPerson(string Name, long long m = 10):weight(m),name(Name){}
    void eat()
    {
        if(name == "ShangXY")
        {
            ++++++weight;
        }
        else
        {
            weight++;
        }
    }
    long long& Weight()
    {
        return weight;
    }
}ShangXY("ShangXY");

void T1(string sMk)
{
    cout << sMk << endl;
    while(1)
    {
        ShangXY.eat();
        ShangXY.Weight()++;
        if(ShangXY.Weight() == LLONG_MAX || mk)
        {
            cout << "ERROR! Out of range!!! Too Heavy!!!!!!!" << endl;
            mk = 1;
            return;
        }
    }
}

int main()
{
    thread t1(T1,"Thread1");
    thread t2(T1,"Thread2");
    t1.join();
    t2.join();
    return 0;
}
