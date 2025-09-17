#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b )
{
    if(a.first > b.first){
        return false;
    }else if(a.first == b.first){
        if(a.second > b.second){
            return true;
        }else{
            return false;
        }
    }else{
        return true;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> vc;


    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        cin >> name >> roll;
        vc.push_back({name , roll});
    }

    sort(vc.begin(), vc.end(), cmp);

    for(auto i: vc){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
