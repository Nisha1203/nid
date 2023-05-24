//write a program which checks whether number is even or odd

#include<stdio.h> //for printf and scanf
#include<stdbool.h> //for bool data type

///////////////////////////////////////////////////////
//     Function name: CheckEvenOdd
//     Input:   Integer
//     Output:  Boolean
//     Description: checks whether input is even or odd
//     Author: Nishigandha Praful Kadam
//     Date:    25/04/2023
///////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2)==0){
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
    printf("Please enter number to check whether it is even or odd: \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue); //Fucntion call

    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else{
        printf("%d is odd number \n",iValue);
    }
    return 0;
}




