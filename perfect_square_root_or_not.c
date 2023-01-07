#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    scanf("%d",&n);
    float p;
    p=sqrt(n);
    m=p;
    if(p==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}