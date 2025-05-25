#include<iostream>
using namespace std;
int main(){
    int day;
    cin >> day;
    switch(day){
        case 1:
            cout << "saterday\n";
            break;
        case 2:
            cout << "monday\n";
            break;
        case 3:
            cout << "sunday\n";
            break;
            default:
                cout << "node";
        }
            return 0;
}