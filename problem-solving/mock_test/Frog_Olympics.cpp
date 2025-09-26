// #include<bits/stdc++.h>
// using namespace std;

// bool reachLappy(int val){

// }
// bool reachJumpster(int val)
// {
// }

// int main (){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int t;
//         cin >> t;

        

//         if (t % 3 == 0)
//         {
//             cout << "Both" << '\n';
//         }else if((t%4 == 0 && t%3 == 0) || t%4==0){
//            cout << "Leapy" << '\n';
//        }
//        else if((t%3==0 && t%5 ==0) || t%5 == 0){
//            cout << "Jumpster" << '\n';
//        }
//        else{
//            cout << "None"<< '\n';
//        }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool canLeapy(int n)
{
    if (n == 3 || n == 4)
        return true;
    return n >= 6;
}

bool canJumpster(int n)
{
    if (n == 3 || n == 5 || n == 6)
        return true;
    return n >= 8;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool l = canLeapy(n);
        bool j = canJumpster(n);

        if (l && j)
            cout << "Both\n";
        else if (l)
            cout << "Leapy\n";
        else if (j)
            cout << "Jumpster\n";
        else
            cout << "None\n";
    }
}
