#include<stdio.h>


//1. travel till the end of dest
//2. copy the data from src to dest
//3. write '\0' at the end of dest


void strcatX(char *src, char *dest)
{
    
    //1. travel till the end of dest
    while(*dest != '\0')
    {
        dest++;
    }
    //2. copy the data from src to dest
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demoo";

    printf("Enter srcing : \n");
    scanf("%[^'\n]s",Arr);

    strcatX(Arr,Brr);

    printf("srcing after copy is :%s\n",Brr);

    return 0; 
}