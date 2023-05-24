//to convert into while loop
#include<stdio.h>

int DisplayF(int iNo)
{
    int iCnt = 0;
    int iRet = 1;

    iCnt = iNo;
    while(iCnt >= 1)
    {
        iRet = iRet * iCnt;
        iCnt--;
    }
    return iRet;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayF(iValue);

    iRet = DisplayF(iValue);

    printf("Result is : %ld\n",iRet);

    return 0;
}

/*

5!

5 * 4 * 3 * 2 * 1 = 120

*/