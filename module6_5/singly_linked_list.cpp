#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    Node n1(10), n2(20), n3(300);
    n1.next = &n2;
    n2.next = &n3;
    cout << "Value of Node 1 : " << n1.data << "\nValue of Node 3 through node 1 :" << n1.next->next->data << endl;
    ;

    return 0;
}