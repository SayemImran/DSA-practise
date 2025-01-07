#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    vector<int> st;
    void push(int data)
    {
        st.push_back(data);
    }
    void pop()
    {
        st.pop_back();
    }
    int top()
    {
        return st.back();
    }
    bool empty()
    {
        if (st.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int m, n;
    MyStack st1;
    MyStack st2;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    bool matcher = true;
    if (m != n)
    {
        cout << "NO";
    }
    else
    {
        while (!st1.empty() && !st2.empty())
        {
            if (st1.top() != st2.top())
            {
                matcher = false;
                break;
            }
            st1.pop();
            st2.pop();
        }

        if (matcher)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}