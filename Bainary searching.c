#include<stdio.h>
int main ()
{
    int array[10]= {1,2,3,4,5,6,8,9,10,11}, i, First=0, Last=9, Mid, Found=1, target=7;
    while(First<=Last)

    {
        Mid=(First+Last)/2;
        if (array[Mid]==target)
        {
            Found=0;
            printf("Found");
            break;
        }
        else if (array[Mid]<target)
            First=Mid+1;
        else
            Last=Mid-1;
    }
    if(array[Mid]!=target)
        printf("Not Found");
    return 0;
}
