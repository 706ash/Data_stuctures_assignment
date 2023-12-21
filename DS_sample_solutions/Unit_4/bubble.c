#include <stdio.h>

int main()
{
    int a[4]={3,4,1,7};

    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}