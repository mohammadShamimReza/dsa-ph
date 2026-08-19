#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n;
    cin >> n;
    unordered_map<string, int> teamGoal;
    for (int i = 0; i < n; i++)
    {
        string inputTeam;
        cin >> inputTeam;
        if(teamGoal[inputTeam] == 0){
            teamGoal[inputTeam] = 1;
        }else{
            teamGoal[inputTeam]++;
        }
        
    }
    string resStr = "null";
    int resInt = 0;
    for (auto &&i : teamGoal)
    {
        // cout << i.first << " is: " << i.second << "\n";
if(resStr == "null" && resInt ==0){
    resStr = i.first;
    resInt = i.second;
}
     
        if(resInt < i.second){
            resStr = i.first;
            resInt = i.second;
        }
    }
    cout << resStr;
    return 0;
}