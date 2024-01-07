#include <stdio.h>

void linearsearch(int key, int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if(a[i]==key)
        {
            printf("%d found at position %d",a[i],i+1);
            return;
        }
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
    linearsearch(key,a,n);
    return 0;   
}