#include<bits/stdc++.h>
using namespace std;
int main (){
  // vector<int> v; // type 1;
  //vector<int> v(5); // type 2;
  // vector<int> v(10, -1);
  // vector<int> v2(v);
  int a[5] = {1, 2, 3, 4, 5};
  // vector<int> v(a, a + 5);
  vector<int> v = {6, 7, 8, 9, 10};
  v.push_back(3);
  v.pop_back();
  v.clear();
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " " << endl;
  }

  cout << v.size() << endl;
  cout << v.max_size() << endl;
  cout << v[4] << endl;

  return 0;
}