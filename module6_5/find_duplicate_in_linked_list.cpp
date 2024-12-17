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
void insert_at_tail(Node* &head, Node* &tail, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}
void has_duplicate(Node* head){
    vector<int> freq(101,0);
    Node* tmp = head;
    int check=0;
    while(tmp != NULL){
        freq[tmp->data]++;
        tmp = tmp->next;
    }
    for(int i = 0; i<101; i++){
        if(freq[i]>1){
            check = 1;
            break;
        }
    }
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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
    Node* tail = NULL;
    int data;
    while (true)
    {
        cin >> data;
        if (data == -1)
        {
            break;
        }
        insert_at_tail(head, tail, data);
    }
    has_duplicate(head);
    return 0;
}