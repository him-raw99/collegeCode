#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};


struct node * insertNode(struct node * head , int data){
    struct node * newPtr = (struct node *) malloc(sizeof(struct node));
    newPtr->next = head;
    newPtr->data=data;
    return newPtr;
}

void traverse(struct node * head ){
    struct node * temp = head;
    if(temp==NULL) printf("-------------traversing----------\n");
    while (temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


void dfs(int current , struct node * adjlist[] , int visited[], int size){
    printf("%d ",current);
    visited[current]=1;
    struct node * temp = adjlist[current];
    while (temp!=NULL){
        if(visited[temp->data]==0){
            dfs(temp->data,adjlist,visited,size);
        }
        temp=temp->next;
    }
}


int main(){
    int numberOfNode , numberOfEdges;
    printf("enter the no. of nodes : ");
    scanf("%d",&numberOfNode);
    printf("nodes going from : 0 - %d \n",numberOfNode-1);
    printf("enter the no. of edges : ");
    scanf("%d",&numberOfEdges);
    struct node * adjList[numberOfNode];
    int visited[numberOfNode];
    for(int i=0;i<numberOfNode;i++){
        adjList[i]=NULL;
        visited[i]=0;
    }

    for(int i=0;i<numberOfEdges;i++){
        int from, to;
        printf("edge between : ");
        scanf("%d %d",&from,&to);
        adjList[to]=insertNode(adjList[to],from);
        adjList[from]=insertNode(adjList[from],to);
    }
    dfs(0,adjList,visited,numberOfNode);
}