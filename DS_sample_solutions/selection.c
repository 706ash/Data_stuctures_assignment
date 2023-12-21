#include <stdio.h>

int main()
{
    int a[4]={3,4,1,7},min,swap;
    
    for(int i=0;i<4;i++)
    {
        min = a[i];
        swap = i;
        for(int j=i+1;j<4;j++)
        {
            if(a[i]>a[j])
            {
                min=a[j];
                swap=j;
            }
        }
        int t=a[i];
        a[i]=min;
        a[swap]=t;

    }
    
    for(int i=0;i<4;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}