#include <stdio.h>

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int a[10]={10,23,44,12,4,78,56,34,11,1};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}