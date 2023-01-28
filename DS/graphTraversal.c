#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * queue = NULL;

void push(int val){
    struct node * Node = (struct node *) malloc(sizeof(struct node));
    struct node * temp = queue;
    Node->data=val;
    Node->next=NULL;
    if(queue==NULL){
        queue=Node;
    }
    else{
        while (temp->next!=NULL){
            temp= temp->next;
        }
        temp->next=Node;
    }
}

void pop(){
    struct node * temp = queue;
    if(queue==NULL)return;
    queue=queue->next;
    free(temp);
}

void traverse(struct node * head ){
    struct node * temp = head;
    while (temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void bfs(int current,int matrix[][],int visited[],int n){

}

int main(){
    int numberOfNode , numberOfEdges;
    printf("enter the no. of nodes : ");
    scanf("%d",&numberOfNode);
    printf("nodes going from : 0 - %d \n",numberOfNode-1);
    printf("enter the no. of edges : ");
    scanf("%d",&numberOfEdges);
    
    int matrix[numberOfNode][numberOfNode],visited[numberOfNode];

    for(int i=0;i<numberOfNode;i++){
        visited[i]=0;
        for(int j=0;j<numberOfNode;j++){
            matrix[i][j]=0;
        }
    }

    for(int i=0;i<numberOfEdges;i++){
        int from, to;
        printf("edge between : ");
        scanf("%d %d",&from,&to);
        matrix[to][from]=1;
        matrix[from][to]=1;
    }
}

