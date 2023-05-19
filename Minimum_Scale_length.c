#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b){ if(b==0) { return a; } return gcd(b, a % b);}int main(){ int n,i; scanf("%d",&n); int a[n]; for(i=0;i<n;i++) scanf("%d",&a[i]); int result=a[0]; for(i=1;i<n;i++) result=gcd(a[i],result); printf("%d
", result);}