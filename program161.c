#include<stdio.h>

int StrlenSmallX(char *str)
{
    int iCount  = 0;

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <='z'))
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
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenSmallX(Arr);

    printf("Number of small letters are : %d\n",iRet);
    return 0;
}

