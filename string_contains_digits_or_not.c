#include <stdio.h>
#include <ctype.h>
int main(){ int t,i,j; scanf("%d", &t); for(i=0; i<t; i++) { char s[100]; scanf("%s", s); int flag=0; for(j=0; s[j] != NULL; j++) { if (isdigit(s[j])) { flag=1; break; } } if(flag==1) { printf("Yes
"); } else { printf("No
"); } }}