#include <stdio.h>
#include <math.h>
#include "NumClass.h"



int isArmstrong(int num)
{
int pow1=0,num2=num,sum=0,digit,num3=num,ansPow;
while(num2>0)
{
pow1++;
num2=num2/10;
}
while(num3>0)
{
digit=num3%10;
ansPow=pow(digit,pow1);
sum=sum+ansPow;
num3=num3/10;
}
if (sum!=num)
return 0;
else return 1;
}

int isPalindrome(int num)
{
int num1=num,reverse=0,digit;
while(num1!=0)
{
digit=num1%10;
reverse=reverse*10+digit;
num1=num1/10;
}
if(reverse!=num)
return 0;
else return 1;
}



