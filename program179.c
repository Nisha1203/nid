#include<stdio.h>

void strcpX(char *str, char *dest)
{
    while(*str != '\0')
    {
        if(*str >='a' && *str <= 'z')
        {
            *dest = *str;
            dest++;
        }
        str++;    
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);

    strcpX(Arr,Brr);

    printf("String after copy is :%s\n",Brr);

    return 0; 
}