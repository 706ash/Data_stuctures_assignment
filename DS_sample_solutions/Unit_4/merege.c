#include <stdio.h>
#include<math.h>


void mergesort(int a[], int start,int end)
{
    int middle = end/2;
    mergesort(a,start,middle);
    mergesort(a,middle,end);
}

int main()
{
    int a[6]={2 ,34, 33, 1 ,67, 11};
    int l = sizeof(a[6])/sizeof(a[0]);
    mergesort(a,0,5);

    for(int i=0;i<l; i++)
        printf("%d\t",a[i]);
    
    return 0;
}