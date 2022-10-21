#include <stdio.h>
#include <stdlib.h>
struct node
{
    int empID;
    struct node *next;
    struct node *prev;
};
 
struct node *head = NULL;
int size = 0;
 
void insertatbegining()
{
    printf("-----------------------------------------------------------------------------\n");
    struct node *Node = (struct node *)malloc(sizeof(struct node));
    Node->prev = NULL;
    printf("enter the element :");
    scanf("%d", &Node->empID);
    Node->next = head;
    head = Node;
    printf("sucessfully inserted %d at the begining of your ll\n", head->empID);
    size++;
    printf("-----------------------------------------------------------------------------\n");
}
 
 
void deleteatend(){
    if (head!=NULL){
        struct node *temp = head;
        if(temp->next!=NULL){
            while (temp->next->next!=NULL){
            temp=temp->next;
            }
            printf("-----------------------------------------------------------------------------\n");
            printf("Last element '%d' deleted \n",temp->next->empID);
            printf("-----------------------------------------------------------------------------\n");
            free(temp->next);
            temp->next=NULL;
        }
        else{
            printf("-----------------------------------------------------------------------------\n");
            printf("Last element '%d' deleted \n",temp->empID);
            printf("-----------------------------------------------------------------------------\n");
            free(temp);
            head=NULL;
        }
        size--;
    }
    else{
        printf("-----------------------------------------------------------------------------\n");
        printf("LL already empty \n");
        printf("-----------------------------------------------------------------------------\n");
    }
}
void traverse()
{
    printf("-----------------------------------------------------------------------------\n");
    struct node *temp = head;
    printf("%d elements your linked list are : { ", size);
    while (temp != NULL)
    {
        printf("%d ", temp->empID);
        temp = temp->next;
    }
    printf("}\n");
    printf("-----------------------------------------------------------------------------\n");
}
 
int main()
{
    int a = 0;
    while (a < 10)
    {
        printf("1> Insert at begining\n");
        printf("2> Delete at the end\n");
        printf("3> Traverse\n");
        printf("0> Exit\n");
        printf("enter the your choice:");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            insertatbegining();
            break;
        case 2:
            deleteatend();
            break;
        case 3:
            traverse();
            break;
        default:
            printf("exiting.....");
            a=11;
            break;
        }
    }
    return 0;
}