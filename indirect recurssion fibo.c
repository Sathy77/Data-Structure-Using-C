#include<stdio.h>
int fibo(int number)
{
    if(number==0)
    {
        return 0;
    }

    if(number==1)
    {
        return 1;
    }
    else
    {
        return fibo(number-1)+fibo(number-2);
    }
}

int fibo_ser(int ind,int Number)
{
    if(ind==Number)
    {
        int res=fibo(ind);
        printf(" %d ",res);
        return 0;
    }
    else
    {
        int res=fibo(ind);
        printf(" %d ",res);
        return fibo_ser(ind+1,Number);
    }
}


int main()
{
    int x;
    scanf("%d",&x);
    fibo_ser(0,x);
    return 0;

}
