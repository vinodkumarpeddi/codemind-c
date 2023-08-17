#include<stdio.h>
#include<math.h>
int main()
{
    int n,divi=0,rem=0,i=0,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum+=rem*pow(8,i);
        ++i;
    }
    printf("%d",sum);
}