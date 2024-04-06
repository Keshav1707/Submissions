#include <stdio.h>
#include <stdlib.h>

/* Structure of a node */
struct node {
    int data;          // Data 
    struct node *next; // Address 
} *head;

int main()
{
    int data ,i;
    struct node *newnode,*temp;
    

    head=(struct node *)malloc(sizeof(struct node));
    
    scanf("%d",&data)
    head->data=data;

}