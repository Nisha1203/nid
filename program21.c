#include<stdio.h>//for printf and scanf

void DisplayFactors(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++){
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    DisplayFactors(iValue);
    return 0;//default value will be 0
}