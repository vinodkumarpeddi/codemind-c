#include<stdio.h>
int main()
{ int n,rem,sum=0,sq; 
scanf("%d",&n); 
sq=n*n;
while(sq>0) 
{ rem=sq%10;
sum=sum+rem; 
sq=sq/10; 
    
} if(sum==n)
{ printf("Neon Number"); } 
else { printf("Not Neon Number"); }}