//dont use this code
#include<stdio.h> 
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength,int iNo)
{
    int iCnt=0;
  
    for(iCnt=0;iCnt<iLength;iCnt++){
        if(Arr[iCnt] == iNo){
            break;
        }
    }
    if(Arr[iCnt] == iNo)
    {
        return false;
    }
    else{
        return true;
    }
}

int main() 
{
    int iSize = 0; 
    int *ptr = NULL; 
    int iCnt = 0; 
    bool bRet = true;
    int iValue = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the element: \n");
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter element that you want to search : \n");
    scanf("%d",&iValue);

    printf("Elements of array are : \n");
    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        printf("%d \n",ptr[iCnt]);
    }

    bRet = Search(ptr,iSize,iValue);

    if(bRet == true){
        printf("The number %d is present: ",iValue);
    }
    else{
        printf("The number %d is not present in the array :",iValue);
    }

    free(ptr);

    return 0; 
}