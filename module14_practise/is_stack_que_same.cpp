#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> qu;
    int s, q;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        int data;
        cin >> data;

        st.push(data);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int data;
        cin >> data;
        qu.push(data);
    }
    bool matcher = true;
    if (s != q)
    {
        cout << "NO" << endl;
    }
    else
    {
        while (!st.empty() && !qu.empty())
        {
            if (st.top() != qu.front())
            {
                matcher = false;
                break;
            }
            st.pop();
            qu.pop();
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