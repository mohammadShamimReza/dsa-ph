#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        int Id;
        string Name;
        char Section;
        int Mark;

    Student(int id, string name, char section, int mark){
        Id = id;
        Name = name;
        Section = section;
        Mark = mark;
    }
};

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int id;
        string name;
        char section;
        int mark;
        cin >> id >> name >> section >> mark;
        Student s1( id, name, section, mark);
        cin >> id >> name >> section >> mark;
        Student s2( id, name, section, mark);
        cin >> id >> name >> section >> mark;
        Student s3( id, name, section, mark);
     
        if (s1.Mark > s2.Mark && s1.Mark > s3.Mark)
        {
            cout << s1.Id <<" " << s1.Name << " " << s1.Section << " " << s1.Mark<<endl;
        }
        else if (s2.Mark > s1.Mark && s2.Mark > s3.Mark)
        {
            cout << s2.Id <<" " << s2.Name << " " << s2.Section << " " << s2.Mark<<endl;
        }
        else if (s3.Mark > s1.Mark && s3.Mark > s2.Mark)
        {
            cout << s3.Id <<" " << s3.Name << " " << s3.Section << " " << s3.Mark<<endl;
        }else  if (s1.Mark == s2.Mark )
        {
            if(s1.Id < s2.Id){
                cout << s1.Id <<" " << s1.Name << " " << s1.Section << " " << s1.Mark<<endl;

            }else{
            cout << s2.Id <<" " << s2.Name << " " << s2.Section << " " << s2.Mark<<endl;
            }
        }
        else if (s2.Mark == s3.Mark)
        {
            if(s2.Id < s3.Id){
                cout << s2.Id <<" " << s2.Name << " " << s2.Section << " " << s2.Mark<<endl;

            }else{
            cout << s3.Id <<" " << s3.Name << " " << s3.Section << " " << s3.Mark<<endl;
            }
        }
        else if (s1.Mark == s3.Mark)
        {
            if(s1.Id < s3.Id){
                cout << s1.Id <<" " << s1.Name << " " << s1.Section << " " << s1.Mark<<endl;

            }else{
            cout << s3.Id <<" " << s3.Name << " " << s3.Section << " " << s3.Mark<<endl;
            }
        }
    }

    return 0;
}