#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *first, *temp, *p, *ttemp, *q, *r;
void init(){
    first=temp=ttemp=p=NULL;
}

void create_first(int x){
    first=new node;
    first->data=x;
    first->next=NULL;
}

void addnote(int x){
    temp=first;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    p=new node;
    p->data=x;
    p->next=NULL;
    temp->next=p;
}

// void swap12(){
//     temp=first;
//     ttemp=temp->next;
//     temp->next=ttemp->next;
//     ttemp->next=temp;
//     first=ttemp;
// }

void swapnth(int x, int y){
    temp=p=first;
    while(temp->data=x){
        ttemp=temp;
        temp=temp->next;
    }
    while (p->data=y){
        q=p;
        p=p->next;      
    }
    ttemp->next=p;
    p->next=temp->next;
    q->next=temp;
    temp->next=p->next;

    


}
void display(){
    temp=first;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }

}
int main(){
    init();
    create_first(10);
    addnote(20);
    addnote(30);
    addnote(40);
    addnote(50);
    // swap12();
    swapnth(20,40);
    display();
}