/*
Given a singly linked list of N nodes. The task is to find middle of the linked list. For example, if given linked list is 1->2->3->4->5 then output should be 3. 

If there are even nodes, then there would be two middle nodes, we need to print second middle element. For example, if given linked list is 1->2->3->4->5->6 then output should be 4.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list and next line contains data of nodes of linked list.

Output:
For each testcase, there will be a single line of output containing data of middle element of linked list.

User Task:
The task is to complete the function getMiddle() which takes head reference as the only argument and should return the data at the middle node of linked list.

Constraints:
1 <= T <= 100
1 <= N <= 100

Example:
Input:
2
5
1 2 3 4 5
6
2 4 6 7 5 1

Output:
3
7
*/


// C pogram to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to get the middle of the linked list*/
int getMiddle(struct Node *head)
{
    struct Node* f = head ;    
    struct Node* s = head ;
    if (head!=NULL)
        while(f!=NULL && f->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
        } 
    return (s->data);    
}

/* Driver program to test above function*/

int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
    printf("%d", getMiddle(head));
    }
    return 0;
}


