//INPUT : 4
//OUTPUT : 2 4 6 8 10 12 14

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
    printf("\n"); 
}

int main()
{

    int iFrequency = 0;

    printf("Enter the Frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}