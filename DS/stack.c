#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 
struct node *head = NULL;
int size = 0;
 
void push()
{
    printf("-----------------------------------------------------------------------------\n");
    struct node *Node = (struct node *)malloc(sizeof(struct node));
    printf("enter the element :");
    scanf("%d", &Node->data);
    Node->next = head;
    head = Node;
    printf("sucessfully inserted %d at the begining of your ll\n", head->data);
    size++;
    printf("-----------------------------------------------------------------------------\n");
}
 
void pop(){
    if (head!=NULL){
    printf("-----------------------------------------------------------------------------\n");
    printf("First element '%d' deleted \n",head->data);
    printf("-----------------------------------------------------------------------------\n");
        struct node *temp = head;
        head=head->next;
        free(temp);
        size--;
    }
    else{
        printf("-----------------------------------------------------------------------------\n");
        printf("LL already empty \n");
        printf("-----------------------------------------------------------------------------\n");
    }
}

void peek(){
    printf("-----------------------------------------------------------------------------\n");
    printf("First element - '%d' \n",head->data);
    printf("-----------------------------------------------------------------------------\n");
}
 
void traverse()
{
    printf("-----------------------------------------------------------------------------\n");
    struct node *temp = head;
    printf("%d elements your linked list are : { ", size);
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
    while (a < 5)
    {
        printf("1> push \n");
        printf("2> pop\n");
        printf("3> traverse\n");
        printf("4> peek\n");
        printf("5> Exit\n");
        printf("enter the your choice:");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            peek();
            break;
        default:
            printf("exiting.....");
            a=5;
            break;
        }
    }
    return 0;
}