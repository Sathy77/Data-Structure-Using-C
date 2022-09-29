#include<stdio.h>
int arry[];
int i=-1;
void Push(int newNumber)
{
    i++;
    arry[i]=newNumber;
}
void Pop()
{
    int j;
    if(i<0)
        printf("Worng! Queue has no value\n");
    else
    {
        for( j=0; j<i; j++)
        {
            arry[j]=arry[j+1];
        }
        i--;
    }

}
int Top()
{
    return arry[0];
}
int main()
{
    //Push(9);
   // Push(10);
   // Push(7);
    Pop();
    int top=Top();

    printf("%d %d", arry[0], top);


    return 0;
}
