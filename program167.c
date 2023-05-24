#include<stdio.h>
#include<stdbool.h>

bool CountSpace(char *str)
{
    int iCount  = 0;

    while (*str != '\0')
    {
        if(*str == 'z')
        {
            return true;
        }
        else{
            return false;
        }
    }

    
}
int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = CountSpace(Arr);

    if(bRet == true)
    {
        printf("There is z");
    }
    else
    {
        pritnf("no z");
    }
    return 0;
}

