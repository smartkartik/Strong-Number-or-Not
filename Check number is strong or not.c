
#include <stdio.h>

int main()
{
    int i, originalNum, num, lastDigit, sum;
    long fact;

   
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);        //input a number.

   
    originalNum = num;

    sum = 0;

  
    while(num > 0)
    {

        
        lastDigit = num % 10;    //last digit of number

      
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;          //factorial of digit
        }

        
        sum = sum + fact;          //sum of factorial of digit

        num = num / 10;
    }
 
    if(sum == originalNum)         //check the condition
    {
        printf("%d is STRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", originalNum);
    }

    return 0;
}
