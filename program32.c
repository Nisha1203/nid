//Take a number from the user and return its factorial
#include<stdio.h>

void DisplayB(int iNo)
{
    int iCnt = 0;


    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayB(iValue);

    return 0;
}

/*

5!

5 * 4 * 3 * 2 * 1 = 120

*/