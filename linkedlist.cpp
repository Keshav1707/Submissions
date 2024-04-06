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
    if (head==NULL)
    {
        cout<<"UNABLE TO ALLOCATE MEMORY";return ;
    }
    
    cout<<"enter head data"<<endl;
    cin>>d;

    head->data=d;
    head->nxt=NULL;
    temp=head;
    
    for (int i = 2; i <= n; i++)
    {
        
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            cout<<"UNABLE TO ALLOCATE MEMORY";return ;
        }
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
    if(head==NULL)
    {
        cout<<"no node";return ;
    }
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->nxt;
    }
 }
 void insertll(int n)
 {
    struct node *temp,*tmp,*prev;
    temp=head;
    while(n--)
    {
        prev=temp;
        temp=temp->nxt;
    }
    tmp=(struct node *)malloc(sizeof(struct node));
    if(tmp==NULL)
    {
        cout<<"UNABLE TO ALLOCATE MEMORY";return ;
    }
    tmp->nxt=temp;
    int d;
    cout<<"enter data"<<endl;
    cin>>d;
    tmp->data=d;
    prev->nxt=tmp;
 }
 void deletell(int n)
 {
    node *temp,*prev;
    temp=head;
    while(n--)
    {
        prev = temp;
        temp=temp->nxt;
    }
    prev->nxt=temp->nxt;
    free(temp);
 }
 int main()
 {
    int x;
    cout<<"enter no. of elements"<<endl;
    cin>>x;
    createlist(x);
    cout<<"the list is"<<endl;
    traverselist(x);
    cout<<"enter the data before where u want to delete"<<endl;
    int n;
    cin>>n;
    // insertll(n);
    // traverselist(n);
    deletell(n-1);
    traverselist(x-1);
    return 0;
 }