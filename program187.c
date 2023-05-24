#include<stdio.h>
#include<stdbool.h>

//1. travel till the end of dest
//2. copy the data from src to dest
//3. write '\0' at the end of dest


bool strcatX(char *str1, char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0') && (*str1 != *str2))
    {
            str1++;
            str2++;
    }

    if((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else{
        return false;
    }
    
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter srcing : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter second srcing : \n");
    scanf("%[^'\n]s",Brr);

    bRet = strcatX(Arr,Brr);

    if(bRet == true)
    {
        printf("Both the string are identical");
    }
    else{
        printf("Both the string are not identical");
    }
    

    return 0; 
}