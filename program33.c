//Take a number from the user and return its factorial
#include<stdio.h>

int Factorial(int iNo)
{
    int i, iR=1;
    for(int i=1;i<=iNo;i++){
        iR=iR * i;
    }
    return iR;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);
    iRet = Factorial(iValue);

    printf("Result is : %d\n",iRet);

    return 0;
}

