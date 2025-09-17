#include<bits/stdc++.h>
using namespace std;
int main (){
  string s;
  getline(cin, s);
  stringstream ss(s);
  string w;
  bool p = false;
  while (ss >> w)
  {
    if (w == "Jessica"){
      p = true;
    }
  }
  string f = (p == false) ? "NO" : "YES";
  cout << f;
  
  return 0;
}