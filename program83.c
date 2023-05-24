//accept n number for user and perform addition of those number

#include<stdio.h> //IO
#include<stdlib.h> // Memory management

float Average(int Arr[], int iLength)
{
    int iCnt=0;
    int iSum = 0;
    int iCount = 0;

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        iSum = iSum +Arr[iCnt];
       
    }
    return ((float)iSum/(float)(iLength));
}
int main() //Entry point function
{
    int iSize = 0; //To store size of array
    int *ptr = NULL; //to store address of array
    int iCnt = 0; //Loop Counter
    int fRet = 0.0;

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

    //step4: Pass the array to the function

    fRet = Average(ptr,iSize);
    printf("The Average is : %d",fRet);
   

    //Step6 : Deallocate the memory of the array

    free(ptr);

    return 0; // return success to OS
}