#include<iostream>
using namespace std;

class school
{
private:
    /* data */
    string name;
    int roll_no;
    int sec;
public:
    school(string n, int r, int s);
    ~school();
    void showDisplay();
};

school::school(string n, int r, int s)
{
    name = n;
    roll_no = r;
    sec = s;
}

school::~school()
{
    cout << "Chutti"<<endl;
}

void school::showDisplay(){
    cout<<"Name: "<<name <<"\nRoll No: "<<roll_no <<"\nSection: " <<sec<<endl;

}


int main()
{
    school S1("Shadab",1,10);
    S1.showDisplay();
    return 0;
}