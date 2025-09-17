#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        char name[100];
        int role;
        double gpa; 
};
int main()
{
    Student shamim, hridoy;
    cin >> shamim.gpa;
    cin.ignore();
    cin.getline(shamim.name, 100);

    cout << shamim.gpa << " " << shamim.name << " "<< endl;

    

    return 0;   
}