#include <stdio.h>
#include "NumClass.h"
#include <math.h>


int isArmstrong(int num)
{
int lenght=numOfDigit(num);
if(num==sumOfFact(num,lenght))
{
    return 1;
}
else{
    return 0;
}
}

int sumOfFact(int num,int lenght)
{
if(num==0)
{
return 0;
}
else
{
return (pow(num%10,lenght))+sumOfFact(num/10,lenght);
}
}

int numOfDigit(int num)
{

if(num==0)
{
return 0;
}
else{
  return 1+numOfDigit(num/10);
 
}}

int isPalindrome(int num)
{

  if(num == reverse(num))
{
        return 1;
}
    
    return 0;
}



int reverse(int num)
{
    
 int digit = numOfDigit(num);
    if(num == 0)
        return 0;
else{
    return ((num%10 *pow(10, digit-1)) + reverse(num/10));
}
}

