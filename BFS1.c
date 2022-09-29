#include<stdio.h>
int totalNode=6;
int main()
{
    int i,j, Lastindex=0, queueindex=0, startNode,
     BFS[6]= {0, 0 , 0, 0, 0, 0}, vijitednode[6]= {0, 0 , 0, 0, 0, 0}, level[6]= {0, 0 , 0, 0, 0, 0};
    int matrix[6][6]= { 0, 1, 0, 1, 1, 0,
                        1, 0, 1, 0, 1, 0,
                        0, 1, 0, 1, 1, 0,
                        1, 0, 1, 0, 0, 1,
                        1, 1, 1, 0, 0, 1,
                        0, 0, 0, 1, 1, 0
                      };

    printf("From where you want to start: ");
    scanf("%d", &startNode);//startNode=2
    startNode=startNode-1;
    level[startNode]=0;//level[0]=0
    vijitednode[startNode]=1;//vijitednode[0]=1
    BFS[Lastindex]=startNode;//BFS[0]=0
    Lastindex++;//Lastindex=3
    queueindex++;//queueindex=2
    while(queueindex<=Lastindex)
    {
        for (i=0; i<totalNode; i++)//i=2
        {
            if(matrix[startNode][i]==1 && vijitednode[i]==0)
            {
                vijitednode[i]=1;
                //level[i]=level[queueindex-1]+1;
                level[i]=level[startNode]+1;
                BFS[Lastindex]=i;
                Lastindex++;
            }
        }
        startNode=BFS[queueindex];
        queueindex++;
    }
    for(i=0; i<totalNode; i++)
    {
        printf("%d ",BFS[i]+1);
    }
    printf("\n");
    for(i=0; i<totalNode; i++)
    {
        printf("%d -> %d\n", i+1, level[i]);
    }
    return 0;
}

