#include<stdio.h>

void Frequency(char *str)
{
    int iCount = 0;
    int iCountC = 0;
    while (*str != 00)
    {
        if(*str >= 'a' && *str<= 'z')
        {
            iCount++;
        }
        else if(*str >= 'A' && *str<= 'Z')
        {
            iCountC++;
        }
        str++;
        
    } 
    printf("number of small is %d and number of capital is %d",iCount,iCountC); 
}


int main()
{
    char Arr[20];
   

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);

    Frequency(Arr);

    return 0;
}