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

int main (){
    int r;
    int c;
    double g;
    cin >> r >> g >> c;
    Student rahim(r, c, g);

    cout << rahim.cls << " " << rahim.gpa << " " << rahim.roll << " ";
    return 0;
}