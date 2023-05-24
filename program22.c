//Take input from user and print the factorial of that number

#include<stdio.h>//for printf and scanf

void DisplayFactors(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<iNo;iCnt++){ //O(N) 
        if(iNo%iCnt==0){
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);
    DisplayFactors(iValue);
    return 0;//default value will be 0
}

//Time complexity : O(N)
//Where N is the input(Natural Number)


/*
== used to assign
ino = 8;

iNo%1==0
iNo%2==0
iNo%3==0
iNo%4==0
iNo%5==0
iNo%6==0
iNo%7==0
iNo%8==0

*/