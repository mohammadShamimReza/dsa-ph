#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(){
        name = "";
        roll = 0;
        marks = 0;
    }
    Student(string name,
            int roll,
            int marks)
    {
        this->name = name;
        this->marks = marks;
        this->roll = roll;
    }
};
bool comp(Student a, Student b){
     if (a.marks > b.marks)
    {
        return true;
    }
    if (a.marks == b.marks){
        
        if(a.roll < b.roll){
            return true;
        }else{
            return false;
        }
    }
    
}
int main()
{
    int n;
    cin >> n;
    Student stdn[n];
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        stdn[i] = Student(name, roll, marks);
    }

    sort(stdn, stdn + n, comp);

    for (int i = 0; i < n; i++)
    {

        cout << stdn[i].name << " " << stdn[i].roll << " " << stdn[i].marks << endl;
    }
    return 0;
}

