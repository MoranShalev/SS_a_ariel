#include <stdio.h>
#include "NumClass.h"
#include <math.h>



int isPrime(int num){
int i;
for(i=2;i<=num/2;i++){
if(num%i!=0){
i++;}

else return 0;
}
return 1;
}

int isStrong(int num){
int sum=0;int azeret=1;int num2=num;int digit;
while(num2>0)
{
azeret=1;
digit=num2%10;
for( int i=digit;i>=1;i--){
azeret=azeret*i;
}
sum=sum+azeret;
num2=num2/10;
}

if (sum!=num){
return 0;
}
else return 1;
}

