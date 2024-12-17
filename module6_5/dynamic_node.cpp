#include<bits/stdc++.h>
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
    Node* head = new Node(10);
    Node* n1 = new Node(100);
    Node* n2 = new Node(120);
    Node* n3 = new Node(1000);

    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    Node* tmp = head;

    while (tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    
    return 0;
}