#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(int iNo)
{
    int iDigit=0;
 
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 8)
        {
            break;
        }
        iNo = iNo/10;  
    }
    if(iNo == 0)
    {
        return false;
    }
    else{
        return true;
    }
   
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