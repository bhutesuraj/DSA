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

void rprint(node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    rprint(head->next);

}
int search(node *head,int x){
    int pos=1;
    node *curr=head;
    while(curr!=NULL){
        if(curr->data==x){
            return pos;
        }
        else{
            pos++;
            curr=curr->next;
        }

    }
    return -1;


}

int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    cout<<"element is present or not let's clear"<<endl;
    cout<<search(head,20)<<endl;
    return 0;
}