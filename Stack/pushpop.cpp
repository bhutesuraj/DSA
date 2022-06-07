#include <iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int size=0;

using namespace std;
struct stack{
    int items[10];
    int top;
    
};
typedef struct stack st;

void createEmptystack(st *s){
    s->top=-1;
    
}

// check if the stack is full or not
int isfull(st *s){
    if (s->top==10-1){
        return 1;
    }
    else{
        return 0;
    }
}

// Check if the stack is empty or not
int isempty(st *s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

// Add element into stack
void push(st *s,int newitem){
    if (isfull(s)){
        cout<<"Stack is full";
    }
    else {
        s->top++;
        s->items[s->top]=newitem;
    }
    size++;
}

// Remove element from stack
void pop(st *s){
    if(isempty(s)){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Item popped"<<endl<< s->items[s->top];
        s->top--;
    }
    size--;
    cout<<endl;
    
}

// Print elements from stack
void printstack(st *s){
    for(int i=0;i< size;i++){
        cout<<s->items[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int ch;
    st *s=(st *)malloc(sizeof(st));
    createEmptystack(s);
    push(s,1);
    push(s,33);
    cout<<"before pop"<<endl;
    printstack(s);
    pop(s);
    cout<<"after pop"<<endl;
    printstack(s);

}
