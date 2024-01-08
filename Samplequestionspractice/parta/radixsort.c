#include <stdio.h>

int getmax(int a[],int n)
{
    int large=a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i]>large)
            large=a[i];
    }
    return large;
}

void countingsort(int a[],int n,int div)
{
    int output[n],count[10];

    for (int i = 0; i < 10; i++)
    {
        count[i]=0;
    }

    for (int i = 0; i < n; i++)
    {
        count[a[i]/div % 10]++;
    }
    
    for (int i = 1; i < 10; i++)
    {
        count[i]+=count[i-1];
    }

    for (int i = n-1; i >=0; i--)
    {
        output[count[a[i]/div % 10]-1]=a[i];
        count[(a[i] / div) % 10]--;
    }

    for (int i = 0; i < n; i++)
    {
        a[i]=output[i];
    }       
}

void radixsort(int a[],int n)
{
    int large = getmax(a,n);

    for (int div = 1; large/div > 0; div*=10)
    {
        countingsort(a,n,div);
    }
}

int main()
{
    int a[10]={10,23,44,12,4,78,56,34,11,1};
    int n=sizeof(a)/sizeof(a[0]);
    radixsort(a,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}