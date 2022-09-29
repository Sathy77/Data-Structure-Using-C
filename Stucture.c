#include<stdio.h>
struct _graph
{
    int node;
    int nextNode;
};
int main()
{
    int stop,j=0, i;
    struct _graph graph[100];
    while(1)
    {
        printf("Press 0 to stop!\nElse press 1\n");
        scanf("%d", &stop);
        if (stop==0)
        {
            break;
        }
        scanf("%d%d", &graph[j].node, &graph[j].nextNode);
        j++;

    }
    for(i=0; i<j; i++)
    {
        printf("Node %d\nNextNode %d",graph[i].node, graph[i].nextNode);
    }
    return 0;
}
