#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void printLL(Node *head){
    Node *temp = head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    
}

int main(){

    Node *head = nullptr;



    cout<<"Original LL: "<<endl;

    printLL(head);


    return 0;
}