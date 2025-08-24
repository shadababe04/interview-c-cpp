#include<iostream>
using namespace std;

class Car{
    private:
        string brand;
        int speed;
    public:
    //constructor
    Car(string b,int s){
        brand = b;
        speed = s;
    }  
    void showDetails(){
        cout<<"Brand: "<<brand<< " speed: "<<speed<<"km/h"<<endl;
    }
};
int main(){
    Car t1("Tesla",300),t2("Maruti",200);
    t1.showDetails();
    t2.showDetails();

    return 0;
}