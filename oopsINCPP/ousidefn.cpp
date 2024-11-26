#include<iostream>
#include<string>
using namespace std;

class myclass{
    public:
    int roll ;
    string name;

    void display();
};

void myclass::display()
{
    cout<<"name is: "<<name<<endl;
    cout<<"roll is: "<<roll<<endl;

}
int main()
{
    myclass c1;
    c1.name="sunny";
    c1.roll=98;
    c1.display();
}