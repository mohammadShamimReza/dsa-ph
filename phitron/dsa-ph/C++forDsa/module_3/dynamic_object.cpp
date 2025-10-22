#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int roll;
        int cls;
        double gpa;

    Student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun(){
    Student karim(9, 2, 5);
    Student *p = &karim;
    return p;
}

int main (){
    int r;
    int c;
    double g;
    cin >> r >> g >> c;
    Student rahim(r, c, g);
    Student* karim =  fun();
    cout << rahim.cls << " " << rahim.gpa << " " << rahim.roll << " " << endl;
    cout << karim->cls << " " << karim->gpa << " " << karim->cls << " ";
    return 0;
}
