#include<stdio.h>

int CountSpace(char *str,char cValue)
{
    int iCount  = 0;

    while (*str != '\0')
    {
        if(*str == cValue)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
    
}
int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&ch);

    iRet = CountSpace(Arr,ch);

    printf("Number of occurances are : %d\n",iRet);

    return 0;
}

