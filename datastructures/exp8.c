#include <stdio.h>
int hash[100];
void display(int m)
{
    for(int i=0;i<m;i++)
    {
        if(hash[i]==0)
        {
            printf("h[%d]=\n",i);
        }
        else{
            
        printf("h[%d]=%d\n",i,hash[i]);
        }
    }
}
void division(int *keys,int n)
{
    int k;
    int m=8;
    for(int i=0;i<n;i++)
    {
        hash[keys[i]%m]=keys[i];
    }
    display(m);
    for(int i=0;i<n;i++)
    {
        hash[keys[i]%m]=0;
    }
}

void trunication(int *keys,int n)
{
    for(int i=0;i<n;i++)
    {
        hash[keys[i]/10]=keys[i];
    }
    display(8);
    for(int i=0;i<n;i++)
    {
        hash[keys[i]/10]=0;
    }
}

void folding(int *keys,int n)
{
    int sum=0,temp;
    for(int i=0;i<n;i++)
    {
        temp=keys[i];
        while(temp!=0)
        {
            sum+=temp%10;
            temp=temp/10;
        }
        hash[sum]=keys[i];
        sum=0;
    }
    display(10);
    for(int i=0;i<n;i++)
    {
        hash[keys[i]/10]=0;
    }
}


int main()
{
    int n,o,con;
    int keys[100];
    printf("\nEnter the no of keys: ");
    scanf("%d",&n);

    printf("\nEnter the keys: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&keys[i]);
    }
    do{
        printf("\nEnter 1 for division method\nEnter 2 for trunication\nEnter 3 for Midsquare method\nEnter 4 for folding method");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            division(&keys[0],n);
            break;
        case 2:
            trunication(&keys[0],n);
            break;
        case 3:
            //midsquare();
            break;
        case 4:
            folding(&keys[0],n);
            break;
        default:36 18 72 43 6
            printf("\nWrong choice");
            break;
        }
        printf("\nDo you want to continue(1/0)");
        scanf("%d",&con);
    }
    while(con==1);
    return 0;
}