#include<iostream>
using namespace std;

class base{
    public:
    int x;
    int y;
};
class derived:public base{
    public:
    int t;
};
int main()
{
    derived d;
    d.t=9;
}