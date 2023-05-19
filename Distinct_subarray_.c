#include<stdio.h>
int main(){ int l,r,i,j; scanf("%d%d",&l,&r); int oddcnt=0; for(i=l; i<=r; i++) { int total=0; for(j=i; j<=r; j++) { total = total+j; if(total%2 == 1) { oddcnt++; } } } printf("%d
",oddcnt);}