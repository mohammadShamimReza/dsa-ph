#include <bits/stdc++.h>
using namespace std;

class stc{
    vector<int> stack;
    public:
       void push(int val)
        {
            stack.insert(stack.begin(), val);
        }
        void pop(){
            if(!stack.empty())
            stack.erase(stack.begin());
        }
        bool empty(){
            return stack.empty();
        }
        int top(){
            return stack[0];
        }
};

class que
{
    vector<int> queue;

public:
    void push(int val)
    {
        queue.insert(queue.begin(), val);
    }
    void pop()
    {
        if (!queue.empty())
            queue.pop_back();
    }
    bool empty(){
       return queue.empty();
    }
    int front(){
        return queue.back();
    }
};

int main()
{
    int s, q;
    cin >> s;
    cin >> q;

    string re = "YES";
    if (s != q)
    {
        re = "NO";
        cout << re;
        return 0;
    }

    stc st;
    for (int i = 0; i < s; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    que qu;
    for (int i = 0; i < q; i++)
    {

        int x;
        cin >> x;
        qu.push(x);
    }

    for (int i = 0; i < s; i++)
    {
        if (!st.empty())
        {

            if (st.top() != qu.front())
            {
                re = "NO";
                break;
            }
            st.pop();
            qu.pop();
        }
    }

    cout << re;

    return 0;
}