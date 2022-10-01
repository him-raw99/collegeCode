#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

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
    }
    else
    {
        struct node *Node = (struct node *)malloc(sizeof(struct node));
        printf("enter the element :");
        scanf("%d", &Node->data);
        Node->next = head;
        head = Node;
        printf("sucessfully inserted %d at the begining of your ll\n", head->data);
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
        printf("-----------------------------------------------------------------------------\n");
    }
    else
    {
        insertatbegining();
    }
}

void traverse()
{
    printf("-----------------------------------------------------------------------------\n");
    struct node *temp = head;
    printf("your linked list : { ");
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
            printf("han bhai kara liya inse3t");
            break;
        case 4:
            printf("han bhai kara liya ins4rt");
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
        }
    }

    return 0;
}