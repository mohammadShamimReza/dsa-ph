#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int sclass;
        char section;
        int id;
};

int main (){
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].sclass >> s[i].section >> s[i].id;
    }

    for (int i = 0; i < n/2; i++)
    {
        char temp = s[i].section;
        s[i].section = s[n - i - 1].section;
        s[n - i - 1].section = temp;

    }
    for (int i = 0; i < n ; i++)
    {
       

        cout << s[i].name << " " << s[i].sclass << " " << s[i].section << " " << s[i].id << endl;
    }

    return 0;
}