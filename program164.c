#include<stdio.h>

//Vowels: a e i o u A E I O U
int CountVowels(char *str)
{
    int iCount  = 0;

    while (*str != '\0')
    {
        if((*str == 'A') || (*str =='a') || (*str =='e') || (*str =='E')|| (*str =='i')|| (*str =='I')|| (*str =='o')|| (*str =='O')|| (*str =='u')|| (*str =='U'))
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

    iRet = CountVowels(Arr);

    printf("Number of capital letters are : %d\n",iRet);
    return 0;
}

