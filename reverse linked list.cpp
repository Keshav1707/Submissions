#include<bits/stdc++.h>
using namespace std;
 struct node{
    int data;
    struct node *nxt;
 }*head;

 void createlist(int n)
 {
    int d;
    struct node *newnode,*temp;
    head=(struct node *)malloc(sizeof(struct node));
    if (head==NULL){cout<<"UNABLE TO ALLOCATE MEMORY";return ;}
    
    cout<<"enter head data"<<endl;
    cin>>d;

    head->data=d;
    head->nxt=NULL;
    temp=head;
    for (int i = 2; i <= n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL){cout<<"UNABLE TO ALLOCATE MEMORY";return ;}
        cout<<"enter next data"<<endl;
        cin>>d;
        newnode->data=d;
        newnode->nxt=NULL;
        temp->nxt=newnode;
        temp=newnode;

    }
    
 }
 void traverselist(int n)
 {
    struct node *temp;
    if(head==NULL){cout<<"no node";return ;}
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->nxt;
    }
 }
 void reverse()
 {
    node *temp,*prev;
    temp=head;
    //head->nxt=NULL;
    while(temp->nxt!=NULL)
    {
        prev=temp;
       temp=temp->nxt;
       temp->nxt= prev;
    } 
 }
int main()
 {
    int x;
    cout<<"enter no. of elements"<<endl;
    cin>>x;
    createlist(x);
    cout<<"the list is"<<endl;
    traverselist(x);
    reverse();
    traverselist(x);
 }