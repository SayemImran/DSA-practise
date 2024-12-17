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

void insert_at_any(Node* &head,int pos, int value){
    Node* newnode = new Node(value);
    Node* tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next; // we have to link
    // the rest of the node after the index position so that those node can
    // not lost forever. 
    /*
        for doing this we have to set those node address to the new nodes 
        next pointer. but out tmp node position is before that node. So we
        can get the address of those node by checking previous node next 
        ponter.
     */
    tmp->next = newnode;
    /*
    after connecting with new node, we can now change the link direction
    from that node to new node
    */
    
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

    insert_at_any(head,2,200);
    print_linked_list(head);   
    return 0;
}