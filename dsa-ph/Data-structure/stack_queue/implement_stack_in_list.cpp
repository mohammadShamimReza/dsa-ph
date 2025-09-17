#include <bits/stdc++.h>
using namespace std;
class myStack
{

public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myStack st;
    st.push(499);
    st.push(5);
    st.push(77);
    cout << st.top() << endl;
    st.pop();
    st.pop();

    if (st.empty() == false)
    {

        cout << st.top();
    }
    return 0;
}