#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 
struct node *head = NULL;
int size = 0;
 
 
void enqueue()
{
    if (head != NULL)
    {
        printf("-----------------------------------------------------------------------------\n");
 
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
 
        // creating a node
        struct node *Node = (struct node *)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d", &Node->data);
        Node->next = NULL;
 
        temp->next = Node;
        printf("sucessfully enqueued %d \n", temp->next->data);
        size++;
        printf("-----------------------------------------------------------------------------\n");
    }
    else
    {
        printf("-----------------------------------------------------------------------------\n");
        // creating a node
        struct node *Node = (struct node *)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d", &Node->data);
        Node->next = NULL;
        head=Node;
        printf("sucessfully enqueued %d \n", Node->data);
        size++;
        printf("-----------------------------------------------------------------------------\n");
    }
}
 
void dequeue(){
    if (head!=NULL){
    printf("-----------------------------------------------------------------------------\n");
    printf("sucessfully dequeued %d \n",head->data);
    printf("-----------------------------------------------------------------------------\n");
        struct node *temp = head;
        head=head->next;
        free(temp);
        size--;
    }
    else{
        printf("-----------------------------------------------------------------------------\n");
        printf("Queue already empty \n");
        printf("-----------------------------------------------------------------------------\n");
    }
}
 
 
void traverse()
{
    printf("-----------------------------------------------------------------------------\n");
    struct node *temp = head;
    printf("%d elements in the Queue : { ", size);
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("}\n");
    printf("-----------------------------------------------------------------------------\n");
}
 
 
 
int main()
{
    int a = 0;
    while (a < 4)
    {
        printf("1> ENQUEUE\n");
        printf("2> DEQUEUE\n");
        printf("3> Traverse\n");
        printf("4> Exit\n");
        printf("enter the your choice:");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        default:
            printf("exiting.....");
            a=4;
            break;
        }
    }
    return 0;
}
