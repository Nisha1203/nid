//static memory allocation

#include<stdio.h>
#include<stdlib.h>

int main(){
    int Arr[5];

    printf("Enter the elements: \n");

    for(int iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements of the array are : \n");
    for(int iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d \n",Arr[iCnt]);
    }

    return 0;
}