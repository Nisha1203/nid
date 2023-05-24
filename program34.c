//Take a number from the user and return its factorial
#include<stdio.h>

typedef unsigned long int ULONG;
ULONG Factorial(int iNo)
{
    int i;
    ULONG iR=1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(int i=1;i<=iNo;i++){
        iR=iR * i;
    }
    return iR;
}


int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);
    iRet = Factorial(iValue);

    printf("Result is : %d\n",iRet);

    return 0;
}

