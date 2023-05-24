#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
    int iDigit=0;
    bool bFlag = false;
 
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 8)
        {
            bFlag=true;
            break;
        }
    }
    return bFlag;
}
int main()
{
    int iValue=0;
    bool bRet = false;
   
    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    bRet = CheckDigit(iValue);

    if(bRet == true){
        printf("The Digit 8 is present");
    }
    else{
        printf("The Digit 8 is not present");
    }

    return 0;
}