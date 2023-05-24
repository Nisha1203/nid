//Display 1 to 5 on screen with the help of for loop with filter
#include<stdio.h> 

void Display(int iNo){
    int iCnt=0;

    if(iNo<0){ //filter
        printf("Please enter positive number");
        return;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++){
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("Enter value: \n");
    scanf("%d",&iValue);
   Display(iValue);
   return 0;
}
