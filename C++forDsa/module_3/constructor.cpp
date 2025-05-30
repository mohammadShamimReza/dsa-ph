#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        int roll;
        int cls;
        double gpa;

    Student(int r, int c, double g){
        roll = r;
        cls = c;
        gpa = g;
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