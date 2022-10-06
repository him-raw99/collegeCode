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

    if (head == NULL)
    {
        struct node *Node = (struct node *)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d", &Node->data);
        Node->next = NULL;
        head = Node;
        printf("element %d sucessfully inserted \n", head->data);
        size++;
    }
    else
    {
        struct node *Node = (struct node *)malloc(sizeof(struct node));
        printf("enter the element :");
        scanf("%d", &Node->data);
        Node->next = head;
        head = Node;
        printf("sucessfully inserted %d at the begining of your ll\n", head->data);
        size++;
    }

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
        if (n <= size)
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
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("}\n");
    printf("-----------------------------------------------------------------------------\n");
}

int main()
{
    int a = 0;
    while (a < 9)
    {
        printf("1> Insert at begining\n");
        printf("2> Insert at End\n");
        printf("3> Insert at a location\n");
        printf("4> Delete at begining\n");
        printf("5> Delete at the end\n");
        printf("6> Delete at a location\n");
        printf("7> Search\n");
        printf("8> Traverse\n");
        printf("9> Quit\n");
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
            printf("han bhai kara liya in5ert");
            break;
        case 6:
            printf("han bhai kara liya i6sert");
            break;
        case 7:
            printf("han bhai kara liya7 nsert");
            break;
        case 8:
            traverse();
            break;
        default:
            printf("okay byeeeee!!!");
            a=10;
            break;
        }
    }

    return 0;
}