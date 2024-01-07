#include <stdio.h>

void binarysearch(int key, int a[],int n)
{
    int m,l=0,h=n-1;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==key)
        {
            printf("\nElement found at position %d",m+1);
            return;
        }
        else if(key<a[m])
            h=m-1;
        else if(key>a[m])
            l=m+1;
    }
    printf("\nElement not fonund");    
}
int main()
{
    int a[10],n,key;
    printf("Enter the no of element in he arrraay: ");
    scanf("%d",&n);
    printf("\nEnter the elements in the array in ascending order : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d",&key);
    binarysearch(key,a,n);
    return 0;   
}