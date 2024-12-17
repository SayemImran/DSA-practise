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

void insert_at_head(Node* &head, int value){
    Node* newnode = new Node(value);
    newnode->next = head;
    head = newnode;
}

void print_linked_list(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
    
}
int main()
{
    Node* head = new Node(10);   
    Node* n1 = new Node(20);   
    Node* n2 = new Node(30);   
    Node* n3 = new Node(40);

    head->next = n1;
    n1->next = n2;
    n2->next = n3;

    insert_at_head(head,200);
    print_linked_list(head);   
    return 0;
}