#include <iostream>
#include <string>
using namespace std;
class copyconstructor
{
    public:
    string name;
    int id;
    copyconstructor(string m, int y)
    {
        name=m;
        id=y;
    }
    copyconstructor(const copyconstructor & other)
    {
        name=other.name;
        id=other.id;
        cout<<name;
    }
};
int main()
{
    copyconstructor first("sunny", 23);
    copyconstructor sec=first;
    return 0;
}