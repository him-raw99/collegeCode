#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 
struct node *head = NULL;
int size = 0;
 
void insertatbegining()
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
 
void insertatend()
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
        printf("sucessfully inserted %d at the ending of your ll\n", temp->next->data);
        size++;
        printf("-----------------------------------------------------------------------------\n");
    }
    else
    {
        insertatbegining();
    }
}
 
void insertatlocation()
{
    if (head != NULL)
    {
        printf("-----------------------------------------------------------------------------\n");
        int n;
        printf("enter the index where you want to perform the insertion :");
        scanf("%d", &n);
        if ((n <= size)&&(n!=0))
        {
            struct node *temp = head;
            for (int i = 0; i < n-1; i++)
            {
                temp = temp->next;
            }
 
            // creating a node
            struct node *Node = (struct node *)malloc(sizeof(struct node));
            printf("enter the data :");
            scanf("%d", &Node->data);
            Node->next=temp->next;
            temp->next=Node;
            printf("sucessfully inserted %d at the %d index of your ll\n", temp->next->data,n);
            size++;
        }
        else if(n==0){
            insertatbegining();
        }
        else
        {
            printf("Index out of bound\n");
        }
        printf("-----------------------------------------------------------------------------\n");
 
    }
    else
    {
        insertatbegining();
    }
}
 
 
void deleteatbegining(){
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
 
 
void deleteatend(){
    if (head!=NULL){
        struct node *temp = head;
        if(head->next==NULL){
            deleteatbegining();
        }
        else{
            while (temp->next->next!=NULL){
                temp=temp->next;
            }
            printf("-----------------------------------------------------------------------------\n");
            printf("Last element '%d' deleted \n",temp->next->data);
            printf("-----------------------------------------------------------------------------\n");
            free(temp->next);
            temp->next=NULL;
            size--;
        }
    }
    else{
        printf("-----------------------------------------------------------------------------\n");
        printf("LL already empty \n");
        printf("-----------------------------------------------------------------------------\n");
    }
}
 
 
void deleteatlocation(){
    if (head!=NULL){
        struct node *temp = head;
        printf("-----------------------------------------------------------------------------\n");
        int n;
        printf("enter the index where you want to perform the deletion :");
        scanf("%d", &n);
        if (n < size)
        {
            struct node *temp = head;
            for (int i = 0; i < n-1; i++)
            {
                temp = temp->next;
            }
            printf("sucessfully deleted %d at the %d index of your ll\n",temp->next->data,n);
            printf("-----------------------------------------------------------------------------\n");
            struct node *ptr = temp->next;
            temp->next=ptr->next;
            free(ptr);
            size--;
        }
        else
        {
            printf("Index out of bound\n");
            printf("-----------------------------------------------------------------------------\n");
        }
    }
    else{
        printf("-----------------------------------------------------------------------------\n");
        printf("LL already empty \n");
        printf("-----------------------------------------------------------------------------\n");
    }
}
 
void search(){
    if (head!=NULL){
    printf("-----------------------------------------------------------------------------\n");
    printf("Enter the element you want to search :");
    int key,flag=0,index=0;
    scanf("%d",&key);
    struct node *temp = head;
    while (temp != NULL)
    {
        if(temp->data==key){
            printf("Element %d found at %d index\n",key,index);
            flag=1;
            break;
        }
        index++;
        temp = temp->next;
    }
    if (flag==0){
        printf("Element not found\n");
    }
    printf("-----------------------------------------------------------------------------\n");
        size--;
    }
    else{
        printf("-----------------------------------------------------------------------------\n");
        printf("LL is empty \n");
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
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("}\n");
    printf("-----------------------------------------------------------------------------\n");
}
 
 
void reverseLinkedList(){
    printf("-----------------------------------------------------------------------------\n");
    struct node * newhead = NULL;
    struct node * temp = head;
    while (temp!=NULL){
        struct node *Node = (struct node *)malloc(sizeof(struct node));
        Node->data=temp->data;
        if (newhead==NULL){
            Node->next=NULL;
            newhead=Node;
        }
        else{
            Node->next=newhead;
            newhead=Node;
        }
        temp=temp->next;
    }
    head=newhead;
    printf("your linked list has been reversed\n");
    printf("-----------------------------------------------------------------------------\n");
}
 
 
int main()
{
    int a = 0;
    while (a < 10)
    {
        printf("1> Insert at begining\n");
        printf("2> Insert at End\n");
        printf("3> Insert at a location\n");
        printf("4> Delete at begining\n");
        printf("5> Delete at the end\n");
        printf("6> Delete at a location\n");
        printf("7> Search\n");
        printf("8> Traverse\n");
        printf("9> reverse the linked list\n");
        printf("10> Quit\n");
        printf("enter the your choice:");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            insertatbegining();
            break;
        case 2:
            insertatend();
            break;
        case 3:
            insertatlocation();
            break;
        case 4:
            deleteatbegining();
            break;
        case 5:
            deleteatend();
            break;
        case 6:
            deleteatlocation();
            break;
        case 7:
            search();
            break;
        case 8:
            traverse();
            break;
        case 9:
            reverseLinkedList();
            break;
        default:
            printf("okay byeeeee!!!");
            a=11;
            break;
        }
    }
 
    return 0;
}