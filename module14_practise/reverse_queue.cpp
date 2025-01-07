#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> origin, rev;
    stack<int> st;

    int sz;
    cin>>sz;

    while (sz--)
    {
        int data;
        cin>>data;
        origin.push(data);
    }

    while (!origin.empty())
    {
        st.push(origin.front());
        origin.pop();
    }

    while (!st.empty())
    {
        rev.push(st.top());
        st.pop();
    }

    while (!rev.empty())
    {
        cout<<rev.front()<<" ";
        rev.pop();
    }
    return 0;
}