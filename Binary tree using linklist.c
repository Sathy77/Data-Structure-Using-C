#include<stdio.h>

struct Node
{
    int Data;
    struct Node *Left;
    struct Node *Right;
};

struct Node *Root=NULL;

void Insert(int value)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->Data=value;
    newNode->Left=NULL;
    newNode->Right=NULL;
    if (Root==NULL)
    {
        Root=newNode;
        //printf("%d\n", newNode->Data);
    }
    else
    {
        struct Node *insertNode=Root;
        while(1)
        {
            if(insertNode->Data>=value)///smaller number or equal number
            {
                if(insertNode->Left==NULL)
                {
                    insertNode->Left=newNode;
                    //printf("%d\n", newNode->Data);
                    break;
                }
                else
                {
                    insertNode=insertNode->Left;
                }
            }

            else///bigger number
            {
                if(insertNode->Right==NULL)
                {
                    insertNode->Right=newNode;
                    //printf("%d\n", newNode->Data);
                    break;
                }
                else
                {
                    insertNode=insertNode->Right;
                }
            }
        }
    }
}
void printInOder(struct Node *printNode)
{
    if(printNode!=NULL)
    {
        printInOder(printNode->Left);
        printf("%d ", printNode->Data);
        printInOder(printNode->Right);
    }
}
void printPreoder(struct Node *printNode)
{
    if(printNode!=NULL)
    {
        printf("%d ", printNode->Data);
        printPreoder(printNode->Left);
        printPreoder(printNode->Right);
    }
}

void printPostoder(struct Node *printNode)
{
    if(printNode!=NULL)
    {
        printPostoder(printNode->Left);
        printPostoder(printNode->Right);
        printf("%d ", printNode->Data);
    }
}

void search(int value)
{
    struct Node *searchNode=Root;
    while(searchNode!=NULL)
    {
        if(searchNode->Data>value)///smaller number
        {
            searchNode=searchNode->Left;
        }
        else if(searchNode->Data<value)
        {
            searchNode=searchNode->Right;
        }
        else
        {
            printf("\nFound %d\n", searchNode->Data);
            break;
        }
    }
    if(searchNode==NULL)
    {
        printf("\nNot Found %d!\n", value);
    }
}
int main()
{
    Insert(50);
    Insert(20);
    Insert(60);
    Insert(70);
    Insert(5);
    Insert(6);
    Insert(10);
    Insert(30);
    Insert(55);
    printInOder(Root);
    printf("\n");
    printPreoder(Root);
    printf("\n");
    printPostoder(Root);
    search(7);
    search(10);
    return 0;
}
