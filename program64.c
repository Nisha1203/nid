//Check if the given number is an pallindrome

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iOri = iNo;
    int iDigit = 0;
    int iReverse = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10) + iDigit;

        iNo = iNo / 10;
    }

    if(iReverse == iOri)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("It is an pallindrome");
    }
    else{
        printf("Not an pallindrome");
    }

    return 0;
}