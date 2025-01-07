#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st1, st2;
    int sz;
    cin>>sz;
    while (sz--)
    {
        int data;
        cin>>data;
        st1.push(data);
    }

    while (!st1.empty())
    {
        int val = st1.top();
        st2.push(val);
        st1.pop();
    }
    while (!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
    
    
    return 0;
}