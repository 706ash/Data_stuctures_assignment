#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    printf("Enter string");
    scanf("%s",s);
    for (int i = 0; i < strlen(s); i++)
    {
        printf("s[%d]=%c\n",i,s[i]);
    }
    return 0;
    

}