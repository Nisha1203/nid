#include<stdio.h>
#include<stdbool.h>

int CheckDigit(int iNo,int iSearch)
{
    int iDigit=0;
    int iCnt = 0;
  
    if((iSearch < 0) || (iSearch >9)){
        printf("Enter the digit in range 0 to 9\n");
        return false;
    }
    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == iSearch)
        {
            iCnt++;
        }
        iNo = iNo/10; 
    }
    return iCnt;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet = 0;
   
    printf("Enter number : \n");
    scanf("%d",&iValue1);

    printf("Digit to be checked(0 to 9): \n");
    scanf("%d",&iValue2);
    
    iRet = CheckDigit(iValue1,iValue2);

    printf("The number of times the digit occured is : %d",iRet);
    
    return 0;
}