#include<iostream>
#include<string>
using namespace std;        
class mycar{        //class creation
    public:
    int year;
    string car;
    void display()              //member fn
    {
        cout<<"car is: "<< car<<endl;
        cout<<"year is: "<<year<<endl;

    }
};

int main()
{
    mycar car1;             //object creation
    car1.year=2000;         //assign value to data member
    car1.car="bmw";
    car1.display();
    return 0;
}