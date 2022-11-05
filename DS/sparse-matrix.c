#include <stdio.h>
 
struct element {
    int row,col,value;
};
 
int main() {
    int r,c,non_0_elements=0,curr=0;
    struct element sparseMatrix[100] ;
    printf("enter the number of rows :");
    scanf("%d",&r);
    printf("enter the number of columns :");
    scanf("%d",&c);
    printf("-----------------------------------------------------------------------------\n");
    for (int i = 0 ; i<r;i++){
        for (int j = 0; j<c; j++){
            printf("element at [%d][%d] :",i,j);
            int val;
            scanf("%d",&val);
            if(val!=0){
                sparseMatrix[curr].row=i;
                sparseMatrix[curr].col=j;
                sparseMatrix[curr].value=val;
                non_0_elements++;
                curr++;
            }
        }
    }
    printf("-----------------------------------------------------------------------------\n");
    
    printf("your sparse matrix :\nr c d\n");
    for (int i = 0 ; i<non_0_elements;i++){
        printf("%d %d %d \n",sparseMatrix[i].row,sparseMatrix[i].col,sparseMatrix[i].value);
    }
    
    printf("-----------------------------------------------------------------------------\n");
    curr=0;
    for (int i = 0 ; i<r;i++){
        for (int j = 0; j<c; j++){
            if(sparseMatrix[curr].row==i && sparseMatrix[curr].col==j){
                printf("%d ",sparseMatrix[curr].value);
                curr++;
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}