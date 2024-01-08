#include <stdio.h>

void merge(int a[],int l,int m,int h)
{
    int i=l,j=m+1,k=l,temp[6];

    while (i<=m && j<=h)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        if(a[j]<=a[i])
        {
            temp[k]=a[j];
            j++;
            k++;
        }
    }
    while (i<=m)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while (j<=h)
    {
        temp[k]=a[j];
        j++;
        k++;
    }
    for (int i = l; i <= h; i++)
    {
        a[i]=temp[i];
    }   
}
void imergesort(int a[],int n)
{
    int l,m,h,p;
    for (p = 2; p<=n; p*=2)
    {
        
        for (int i = 0; i+p-1<n;i+=p)
        {
            l=i;
            h=i+p-1;
            m=(l+h)/2;
            merge(a,l,m,h);
        }
        
    }  

    if(p/2<n)
        merge(a,0,p/2-1,n);
}
int main()
{
    int a[6]={1,2 ,7,0,11,5},n=sizeof(a)/sizeof(a[0]);
    imergesort(a,n);
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t",a[i]);
    }    
    return 0;
}