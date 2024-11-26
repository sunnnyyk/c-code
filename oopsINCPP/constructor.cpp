#include<iostream>
#include<string>
using namespace std;

class constexp{
    public:
    string brand;
    string model;
    int year;

    constexp(string x, string y, int z)
    {
        brand=x;
        model=y;
        year=z;
        cout<<brand<< model << year<<endl;
    }
};
int main()
{
    constexp car("ma", "tata",2000);
    return 0;
}
