#include<stdio.h>

int StrlencapitalX(char *str)
{
    int iCount  = 0;

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <='Z'))
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

    iRet = StrlencapitalX(Arr);

    printf("Number of capital letters are : %d\n",iRet);
    return 0;
}

