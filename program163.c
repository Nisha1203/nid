#include<stdio.h>

int StrlenDigitX(char *str)
{
    int iCount  = 0;

    while (*str != '\0')
    {
        if((*str >= '0') && (*str <='9'))
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

    iRet = StrlenDigitX(Arr);

    printf("Number of Digits are : %d\n",iRet);
    return 0;
}

