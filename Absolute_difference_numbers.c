#include<stdio.h>
#include<math.h>
int main(){ int n,m,p,l,r=0,f=0,temp,a,b; scanf("%d%d",&n,&m); p=pow(10,m); l=n%p; while(n>0) { a=n%10; r=r*10+a; n=n/10; } temp=r%p; while(temp>0) { b=temp%10; f=f*10+b; temp=temp/10; } printf("%d",abs(l-f));}