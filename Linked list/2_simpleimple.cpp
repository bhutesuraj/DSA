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
    head->next=new node(2);
    head->next->next=new node(3);
    // node *tm1=new node(2);
    // node *tm2=new node(3);
    // head->next=tm1;
    // tm1->next=tm2;
    printlist(head);
    return 0;
}