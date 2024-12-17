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

void insert_at_tail(Node* &head, int value){
    Node* newnode = new Node(value);
     // if head is empty then the next node is the first node
    if (head == NULL)
    {
        head=newnode;
        return;
    }

    Node* temp = head;
    
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    
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
    Node* head = NULL;   
    // Node* n1 = new Node(20);   
    // Node* n2 = new Node(30);   
    // Node* n3 = new Node(40);

    // head->next = n1;
    // n1->next = n2;
    // n2->next = n3;

    insert_at_tail(head,200);
    insert_at_tail(head,400);
    insert_at_tail(head,500);
    insert_at_tail(head,700);
    insert_at_tail(head,20);
    print_linked_list(head);   
    return 0;
}