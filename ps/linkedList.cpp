#include<bits/stdc++.h>
using namespace std;



class ClassRoom{
    public:
        ClassRoom(){
            cout << "this is constructor function" << endl;
        }
};

class Car{

public:
    int year;
    string name;
    string model;
    string owner;
    string buyer;

    Car(int y, string n, string m);
    Car(string owner, string buyer);

        
};

Car::Car(int y, string n, string m)
{
    year = y;
    name = n;
    model = m;
}

Car::Car(string o, string b){
    owner = o;
    buyer = b;
};

class employ{
    private:
       int monthly;

    public:
        void setSalary(int amoount){
            monthly = amoount;
        };
        int getSalara()
        {
            return monthly;
        }
};
int
main()
{
    // ClassRoom myClass;
    Car myCar(2, "shamim", "3232");

    // cout << myCar.name << " " << myCar.model << " " << myCar.year << "\n";
    Car ownCar("shaimim", "mahim");
    cout << ownCar.owner << " " << ownCar.buyer << " " << "\n";
    employ myEmploy;
    myEmploy.setSalary(3000);
    cout << myEmploy.getSalara() << "\n";
    return 0;
}




