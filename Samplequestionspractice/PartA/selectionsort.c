#include <stdio.h>

void swapa(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int a[10]={10,23,44,12,4,78,56,34,11,1},*min;

    for (int i = 0; i < 9; i++)
    {
        min=&a[i];
        for (int j = i+1; j < 10; j++)
        {            
            if(a[j]<*min)
                min=&a[j];
        }
        swapa(&a[i],min);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}