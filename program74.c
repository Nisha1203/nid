#include<stdio.h> //IO
#include<stdlib.h> // Memory management

int main() //Entry point function
{
    int iSize = 0; //To store size of array
    int *ptr = NULL; //to store address of array
    int iCnt = 0; //Loop Counter

    //Step 1: Accept THe number of elements from user
    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    //step2: Allocate memory dynamically

    ptr = (int *)malloc(iSize * sizeof(int));

    //step3: Accept the values from user
    printf("Enter the element: \n");
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("%d \n",ptr[iCnt]);
    }


    return 0; // return success to OS
}