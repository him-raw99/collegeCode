#include <stdio.h>


int main(){
    int numberOfNode , numberOfEdges;
    printf("enter the no. of nodes : ");
    scanf("%d",&numberOfNode);
    int adjecencyMatrix[numberOfNode][numberOfNode];
    for(int i=0;i<numberOfNode;i++){
        for(int j=0;j<numberOfNode;j++){
            adjecencyMatrix[i][j]=0;
        }
    }
    printf("nodes going from : 0 - %d \n",numberOfNode-1);
    printf("enter the no. of edges : ");
    scanf("%d",&numberOfEdges);
    for(int i=0;i<numberOfEdges;i++){
        int from , to;
        printf("edge %d goes from :",i+1);
        scanf("%d",&from);
        printf("edge %d goes to :",i+1);
        scanf("%d",&to);
        adjecencyMatrix[from][to]=1;
        adjecencyMatrix[to][from]=1;
    }

    for(int i=0;i<numberOfNode;i++){
        for(int j=0;j<numberOfNode;j++){
            printf("%d",adjecencyMatrix[i][j]);
        }
        printf("\n");
    }
}