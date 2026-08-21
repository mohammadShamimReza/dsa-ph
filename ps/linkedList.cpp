#include<bits/stdc++.h>
using namespace std;

// class ClassRoom{
//     public:
//         ClassRoom(){
//             cout << "this is constructor function" << endl;
//         }
// };

// class Car{

// public:
//     int year;
//     string name;
//     string model;
//     string owner;
//     string buyer;

//     Car(int y, string n, string m);
//     Car(string owner, string buyer);

// };

// Car::Car(int y, string n, string m)
// {
//     year = y;
//     name = n;
//     model = m;
// }

// Car::Car(string o, string b){
//     owner = o;
//     buyer = b;
// };

// class employ{
//     private:
//        int monthly;

//     public:
//         employ(int s)
//         {
//             monthly = s;
//         }
//         void setSalary(int amoount){
//             monthly = amoount;
//         };
//         int getSalara()
//         {
//             return monthly;
//         }
//         friend void displaySalary(employ emp)
//         {
//             cout << "salary: " << emp.monthly;
//         };
// };

// void displaySalary(employ emp)

// class Viehicle
// {
// public:
//     string brand = "Ford";
//     void honk()
//     {
//         cout << "Tuut, tuut! \n";
//     }
// };

// class Car : public Viehicle
// {
// public:
//     string model = "Mustang";
//     string type = "4 wheller";
// };

// class MyClass
// {
// public:
//     void myFunciton()
//     {
//         cout << "Some content in parent class.";
//     }
// };

// class MyOtherClass
// {
// public:
//     void myOtherFunction(string otherFunction)
//     {
//         cout << otherFunction;
//     }
// };

// class MyChield : public MyClass
// {
// };

// class MyGrandChild : public MyChield, public MyOtherClass
// {
// };

class Employee
{
protected:
    int salary;
};
class Programmer : public Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int
main()
{
    Programmer myEmp;
    myEmp.setSalary(50000);
    myEmp.bonus = 15000;
    cout << "Salary: " << myEmp.getSalary() << "\n";
    cout << "Bonus: " << myEmp.bonus;
    // MyGrandChild myObj;
    // myObj.myFunciton();
    // myObj.myOtherFunction("This is from other function \n");
    // // ClassRoom myClass;
    // Car myCar(2, "shamim", "3232");

    // // cout << myCar.name << " " << myCar.model << " " << myCar.year << "\n";
    // Car ownCar("shaimim", "mahim");
    // cout << ownCar.owner << " " << ownCar.buyer << " " << "\n";
    // employ myEmploy;
    // myEmploy.setSalary(3000);
    // cout << myEmploy.getSalara() << "\n";

    // employ myEmp(4000);
    // displaySalary(myEmp);

    // Car myCar;
    // myCar.honk();
    // cout << myCar.brand + " " + myCar.model + myCar.type + " ";

    return 0;
}
