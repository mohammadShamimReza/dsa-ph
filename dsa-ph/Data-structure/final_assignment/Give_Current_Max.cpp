#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks > b.marks)
            return false;
        else if (a.marks < b.marks)
            return true;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int v;
        cin >> v;
        if(v == 0){
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }else if(v ==1){
            if(pq.empty()){
                cout << "Empty" << endl;
            }else{
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }else if( v ==2){
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty()){
                    cout << "Empty" << endl;
                }else{
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                  
            }
        }
    }

    // while (!pq.empty())
    // {
    //     cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    //     pq.pop();
    // }
}
