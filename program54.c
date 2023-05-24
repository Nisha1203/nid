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
    if(iDigit == 8)
    {
        return true;
    }
    else{
        return false;
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
        printf("The Digit is present");
    }
    else{
        printf("The Digit is not present");
    }

    return 0;
}