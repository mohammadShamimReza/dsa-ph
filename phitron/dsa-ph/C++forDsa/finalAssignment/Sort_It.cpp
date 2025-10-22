#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int id;
        int mmark;
        int emark;

    int totalMark (){
       int tm = this->mmark + this->emark;
       return tm;
    }
};
bool comp(Student l, Student r){
    if(l.totalMark() == r.totalMark()){
        if(l.id > r.id){
            return false;
        }else{
            return true;
        }
    }
    else if(l.totalMark() > r.totalMark())
    {
        return true;
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