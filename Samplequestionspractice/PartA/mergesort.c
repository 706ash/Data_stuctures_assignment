#include <stdio.h>
void merge(int a[],int l,int h,int mid);
void mergesort(int a[],int l,int h)
{
    
    if(l<h)
    {
        int mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,h,mid);
    }
}

void merge(int a[],int l,int h,int mid)
{
    int temp[10];
    int i=l;
    int j=mid+1;
    int k=l;

    while(i<=mid && j<=h)
    {
        if(a[i]<=a[j])
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        else{
            temp[k]=a[j];
            j++;
            k++;
        }
        
    }    
    while(i<=mid)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    
    while(j<=h)
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
int main()
{
    int a[10]={1,2 ,7,0,11,5},l=0,h=5;
    mergesort(a,l,h);
    for (int i = 0; i <= h; i++)
    {
        printf("%d\t",a[i]);
    }    
    return 0;
}
