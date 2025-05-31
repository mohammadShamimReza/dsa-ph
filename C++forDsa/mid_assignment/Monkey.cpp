#include<bits/stdc++.h>
using namespace std;
int main (){
    string inputText;
    while (getline(cin, inputText))
    {
        inputText.erase(remove(inputText.begin(), inputText.end(), ' '), inputText.end());
        sort(inputText.begin(), inputText.end());
        cout  << inputText << endl;
    }
    
  return 0;
}