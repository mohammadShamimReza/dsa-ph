#include<bits/stdc++.h>
using namespace std;
int main (){
  int n;
  cin >> n;
  cin.ignore();

  for (int i = 0; i < n; i++)

  {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string fsts;
    string snds;
    ss >> fsts;
    ss >> snds;
    int p = fsts.find(snds);
    while (true)
    {
      if(p == -1)break;
      fsts.replace(p, snds.size(), "#");
      
      p = fsts.find(snds, p+1);
    }

    cout << fsts << endl;
  }

  return 0;
}