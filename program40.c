#include<stdio.h>


 int  DisplayDigits(int iNo)
 {
  
    int iSum = 0;
    int iDigit = 0;


    while(iNo != 0)
    {
      
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
    }
    return iSum;
 }
int main()
{
    int iValue=0;
    int iRet= 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet =DisplayDigits(iValue);

    printf("%d hhh",iRet);
    return 0;
}