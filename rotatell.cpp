/*
Given a singly linked list of size N. The task is to rotate the linked list counter-clockwise by k nodes, 
where k is a given positive integer smaller than or equal to length of the linked list.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list and next line 
contains linked list elements and last line contains k, by which linked list is to be rotated.

Output:
For each testcase, print the rotated linked list.

User Task:
The task is to complete the function rotate() which takes head reference as the first argument and k as the second argument.

Constratints:
1 <= T <= 100
1 <= N <= 103
1 <= k <= 103

Example:
Input:
1
8
1 2 3 4 5 6 7 8
4

Output:
5 6 7 8 1 2 3 4

*/



#include<stdio.h>
#include<stdlib.h>
#include<iostream>
struct node
{
    int data;
    struct node* next;
}*head;
void rotate(struct node **head_ref, int k);
  void insert()
{
    int n,i,value;
    struct node *temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf(" ");
}
/* Drier program to test above function*/
void rotate(struct node **head_ref, int k)
{
	int c=1;
    int len=1;
    struct node *p,*temp,*newhead;
    p=(*head_ref);
    temp=(*head_ref);
    while(p->next!=NULL)
    {
        p=p->next;
        if(c!=k)
        {
            temp=temp->next;
            c++;
        }
        len++;
    }
    if(len!=k)
    {
    newhead=temp->next;
    temp->next=NULL;    
    p->next=head;
    //update the head pointer with new head pointer
    (*head_ref)=newhead;
    }	

}
int main(void)
{
    /* Start with the empty list */
    int t,k,n,value;
     /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
     scanf("%d",&t);
     while(t--)
     {
     insert();
     scanf("%d",&k);
     rotate(&head,k);
     printList(head);
     }
     return(0);
}


