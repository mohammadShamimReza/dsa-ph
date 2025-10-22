#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int mmark;
    int emark;

};
bool comp(Student l, Student r)
{
    if(l.emark > r.emark){
        return true;
    }else if(l.emark == r.emark){
        if(l.mmark > r.mmark){
            return true;
        }else if(l.mmark == r.mmark){
            if(l.id < r.id){
                return true;
            }else {
                return false;
            }
        }else {
            return false;
        }
    }else{
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].id >> s[i].mmark >> s[i].emark;
    }
    sort(s, s + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].id << " " << s[i].mmark << " " << s[i].emark << endl;
    }
    return 0;
}