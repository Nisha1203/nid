#include<stdio.h>

//Vowels: a e i o u A E I O U
int CountSpace(char *str)
{
    int iCount  = 0;

    while (*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountSpace(Arr);

    printf("Number of count space are : %d\n",iRet);
    return 0;
}

