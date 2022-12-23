#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int data;
    struct node * left;
    struct node * right;
};
 
struct node * root = NULL;
 
 
struct node *  placeNode (struct node * parent,int data){
    if(data>parent->data){
        if(parent->right==NULL) return parent;
        placeNode(parent->right, data);
    }
    else if(data<=parent->data){
        if(parent->left==NULL) return parent;
        placeNode(parent->left, data);
    }
}
 
void create(int data){
    struct node * parent = placeNode(root,data);
    struct node * Node = (struct node *) malloc(sizeof(struct node));
    Node->data = data;
    Node->left=NULL;
    Node->right=NULL;
    if(parent->data>=data){
        parent->left=Node;
    }
    if(parent->data<data){
        parent->right=Node;
    }
}
 
void traverse(struct node * parent, int order){
    //@Desc::-
    //order 1 - DLR (pre order)
    //order 2 - LDR (in order)
    //order 3 - LRD (post order)
    if(parent!=NULL){
        if(order==1)printf("%d ",parent->data);
        traverse(parent->left,order);
        if(order==2)printf("%d ",parent->data);
        traverse(parent->right,order);
        if(order==3)printf("%d ",parent->data);
    }
}
 
 
int main() {
    root = (struct node *) malloc(sizeof(struct node));
    root->data = 20;
    root->left=NULL;
    root->right=NULL;
    create(5);
    create(5);
    create(10);
    create(15);
    create(25);
    create(35);
    traverse(root,2);
    return 0;
}