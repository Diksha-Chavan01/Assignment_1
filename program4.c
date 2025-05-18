///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Used to accept one number and check whether it is divisible by 5 or not
//  Author :        Diksha Anil Chavan
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE -1

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}