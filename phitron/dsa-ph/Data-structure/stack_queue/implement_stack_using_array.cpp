#include<bits/stdc++.h>
using namespace std;
class myStack{

    public: 
        vector<int>v;

        void push(int val){
            v.push_back(val);
        }

        void pop()
        {
            v.pop_back();
        }

        int top(){
            return v.back();
        }

        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
        }
};
int main()
{
    myStack st;
    st.push(499);
    st.push(5);
    st.push(77);
    cout << st.top()<< endl;
    st.pop();
    st.pop();
 
    if(st.empty() == false){

        cout << st.top();
    }
    return 0;
}