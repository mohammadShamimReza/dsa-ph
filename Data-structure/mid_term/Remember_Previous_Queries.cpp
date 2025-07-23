#include <bits/stdc++.h>
using namespace std;

void print_from_l_to_r(list<int> data)
{
   for(int v:data){
       cout << v << " ";
   }
   cout << endl;
}
void print_from_r_to_l(list<int> data)
{
    list<int> temp = data;
    temp.reverse();
    for (int v : temp)
    {
        cout << v << " ";
    }
    cout << endl;
}

int main()
{

    list<int> data;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int pos, val;
        cin >> pos;
        cin >> val;
        if (pos == 0)
        {
            data.push_front(val);
          
        }
        else if (pos == 1)
        {
            data.push_back(val);
         
        }
        else if (pos == 2)
        {

            if (val >= 0 && val < data.size())
            {
                data.erase(next(data.begin(), val));
            
            }
        }
        cout << "L -> ";
        print_from_l_to_r(data);
        cout << "R -> ";
        print_from_r_to_l(data);
    }

    return 0;
}