//Array

#include<stdio.h>
#include<stdlib.h>//for memory allocation

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("unabl eto allocate memory\n");
        return -1;
    }

    printf("Memory allocated success..\n");

    return 0;
}
