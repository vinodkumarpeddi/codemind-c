#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,rem,d,m;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        d=log10(n)+1;
        rem=n%10;
        s=s+pow(rem,d);
        n=n/10;
    }
    if(m==s)
    printf("True");
    else
    printf("False");
}