#include<stdio.h>
int BFS[], vijitednode[], level[];
int main()
{
    int graphNodeNumber;
    printf("Matrix size ");
    scanf("%d", &graphNodeNumber);
    int matrix[graphNodeNumber][graphNodeNumber];
    int i, j, node ,joinNode;

    for (i=0; i<graphNodeNumber; i++)
    {
        for(j=0; j<graphNodeNumber; j++)
        {
            matrix[i][j]=0;
        }
    }

    for (i=0; i<graphNodeNumber; i++)
    {
        for(j=0; j<graphNodeNumber; j++)
        {
            printf("Node-->JoinNode = ");
            scanf("%d%d", &node, &joinNode);
            matrix[node][joinNode]=1;
        }
    }

    for (i=0; i<graphNodeNumber; i++)
    {
        for(j=0; j<graphNodeNumber; j++)
        {
            printf("%d ", matrix[i][j] );
        }
        printf("\n");
    }



    return 0;
}
