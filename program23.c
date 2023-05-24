//Take input from user and print the factorial of that number with less time complexity

#include<stdio.h>//for printf and scanf

void DisplayFactors(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=(iNo/2);iCnt++){ //O(N/2) 
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

//Time complexity : O(N/2)
//Where N is the input(Natural Number)


