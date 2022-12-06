#include<stdio.h>
int is_prime(int n)
{   int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c>2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,c;
   scanf("%d",&n);
   int a=is_prime(n);
   if(a==1)
   {
       printf("Prime");
       
   }
   else
   {
       printf("Not Prime");
   }
}