#include <stdio.h>
#include "NumClass.h"
#include <math.h>


int main()
{
int num1,num2,i,min,max;
scanf("%d",&num1);
scanf("%d",&num2);
if(num1<num2)
{
min=num1;
max=num2;
}
else{
min=num2;
max=num1;
}
printf("The Armstrong numbers are:");
for(i=min;i<=max;i++)
{
if (isArmstrong(i)==1)
{
printf("%d",i);
}
}
printf("\nThe Palindromes are:");
for(i=min;i<=max;i++)
{
if (isPalindrome(i)==1)
{
printf("%d",i);
}
}
printf("\nThe Prime numbers are:");
for(i=min;i<=max;i++)
{
if (isPrime(i)==1)
{
printf("%d",i);
}
}
printf("\nThe Strong numbers are:");
for(i=min;i<=max;i++)
{
if (isStrong(i)==1)
{
printf("%d",i);
}
}
printf("\n");
return 0;
}


