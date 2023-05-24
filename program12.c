//Display hello world five times on screen
//To display with the help of user input
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    //    1       2       3
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Hello world.....\n"); //4
    }
    
}

int main()
{
    int iValue=0;
    printf("Enter the frequency for hello world statement...\n");
    scanf("%d",&iValue);
   
    Display(iValue);
    return 0; 
}







