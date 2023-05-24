//Take two numbers from user x and y the output must be x raise to y

//check if prime number or not
#include<stdio.h>

typedef unsigned long int ULONG;//used
ULONG CalculatePower(int iBase, int iPower)
{
    int iCnt=0;
    ULONG iR = 1;

    if((iBase<0)||(iPower<0))
    {
        return 0;
    }
    iCnt=1;
    while(iCnt<=iPower){
        iR= iR*iBase;
        iCnt++;
    }
    return iR;
}


int main()
{
    int iValue1=0,iValue2=0;
    ULONG iRet = 0;
    printf("Enter base: \n");
    scanf("%d",&iValue1);

    printf("Enter power: \n");
    scanf("%d",&iValue2);


    iRet = CalculatePower(iValue1,iValue2);

    printf("Result is : %ld\n",iRet);
    return 0;
}
//Time complexity is n where n is the power