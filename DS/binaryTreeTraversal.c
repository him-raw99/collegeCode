#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int data;
    struct node * left;
    struct node * right;
};
 
 
struct node * create(int data){
    struct node * Node = (struct node *) malloc(sizeof(struct node));
    Node->data = data;
    Node->left=NULL;
    Node->right=NULL;
    return Node;
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
 
struct node*  root = NULL;
 
int main() {
    root=create(0);
    root->left=create(1);
    root->right=create(2);
    root->left->right=create(3);
    root->left->left=create(4);
    traverse(root,3);
    return 0;
}