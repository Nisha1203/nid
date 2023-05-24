//write a program which checks whether number is divisible or not by 3 and 5

#include<stdio.h> //for printf and scanf
#include<stdbool.h> //for bool data type

///////////////////////////////////////////////////////
//     Function name: CheckDivisible
//     Input:   Integer
//     Output:  Boolean
//     Description: checks whether input is even or odd
//     Author: Nishigandha Praful Kadam
//     Date:    25/04/2023
///////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 3)==0) && ((iNo % 5)==0 )){
        return true;
    }
    else{
        return false;
    }
}
////////////////////////////////////////////////////
// Entry Point function
////////////////////////////////////////////////////


int main()
{

    int iValue=0;       // VAriable to accept input
    bool bRet = false;  // Variable to accept return value
    printf("Please enter number to check whether it is divisible by 3 and 5: \n");
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue); //Fucntion call

    if(bRet == true)
    {
        printf("%d is completely divisible by 3 and 5\n",iValue);
    }
    else{
        printf("%d is not completely divisible by 3 and 5\n",iValue);
    }
    return 0;
}




