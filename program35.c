//to convert into while loop
#include<stdio.h>

void DisplayF(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayF(iValue);

    return 0;
}

/*

5!

5 * 4 * 3 * 2 * 1 = 120

*/