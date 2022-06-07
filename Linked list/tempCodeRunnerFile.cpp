#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(node *head){
    node *curr=head;
    while(curr !=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    node *head=new node(1);
    printlist(head);
    printlist(head);
    return 0;
}