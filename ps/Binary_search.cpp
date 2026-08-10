#include <stdio.h>
#include <iostream>

using namespace std;

int binarySearch(int arr[5], int target)
{
    int lo = 0, hi = 5;
    cout << arr[5];
    bool h = false;
    int res;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid] == target){
            res = mid;
        break;
    }
        else if (arr[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    if(h){
        return res;
    }else{

        return -1;
    }
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
       
        arr[i] = n;
    }

    
    int p = binarySearch(arr , 7);
    cout << p;
    return 0;
}