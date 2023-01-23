#include<stdio.h>
int main(){ int m,i; scanf("%d",&m); for(i=1;i<=m;i++) { int n,r,rev=0,old; scanf("%d",&n); old=n; while(n>0) { r=n%10; rev=rev*10+r; n=n/10; } if(old==rev) printf("True
"); else printf("False
"); }}