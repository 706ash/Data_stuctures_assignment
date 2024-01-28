#include <stdio.h>
#include <math.h>
#define max 15
int hash[max];

void display(int n)
{
    for (int i = 0; i < n; i++)
    {
        if(hash[i]==0)
            printf("\nhash[%d]= ",i);            
        else
            printf("\nhash[%d]=%d",i,hash[i]);            
    }
}

void emptyhash()
{
    for (int i = 0; i < max; i++)
    {
        hash[i]=0;
    }    
}
void div(int keys[],int n)
{

    for (int i = 0; i < n; i++)
    {
        hash[keys[i]%8]=keys[i];
    }
    display(8);
    emptyhash();
}

void truncation(int keys[],int n)
{
    for (int i = 0; i < n; i++)
    {
        hash[keys[i]/10]=keys[i];
    }
    display(10);
    emptyhash();
}

void midsq(int keys[],int n)
{
    int no_of_digits,e,a,temp;
    for (int i = 0; i < n; i++)
    {
        no_of_digits=log10(keys[i])+1;
        a=round(no_of_digits/3);
        e=no_of_digits-2*a;
        temp=keys[i];
        temp/=pow(10,a);
        temp=temp%(int)pow(10,e);
        hash[temp*temp]=keys[i];
    }
    display(10);
    emptyhash();
}

void fold(int keys[],int n)
{
    int sum=0,temp;
    for (int i = 0; i < n; i++)
    {
        temp=keys[i];
        while (temp!=0)
        {
            sum+=temp%10;
            temp/=10;
        }
        hash[sum]=keys[i];  
        sum=0;      
    }
    display(10);
    emptyhash();    
}
int main()
{
    int o,con,n,keys[20];
    do
    {
        printf("\nEnter the no keys to be inserted: ");
        scanf("%d",&n);
        printf("\nEnter the keys to be inserted: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&keys[i]);
        }               
        printf("\nEnter 1 for division\nEnter 2 for truncation\nEnter 3 for midsquare\nEnter 4 for folding");
        scanf("%d",&o);
        switch (o)
        {
        case 1:
            div(keys,n);
            break;

        case 2:
            truncation(keys,n);
            break;
        
        case 3:
            midsq(keys,n);
            break;
        
        case 4:
            fold(keys,n);
            break;

        default:
            printf("\nWrong choice");
            break;
        }
        printf("\ndo you want to continue(1/0): ");
        scanf("%d",&con);
    } while (con==1);
    return 0;
}