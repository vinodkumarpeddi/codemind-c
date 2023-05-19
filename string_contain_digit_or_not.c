#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){ char str[100]; scanf("%[^
]s", str); int i,count=0; for (i=0; i<strlen(str); i++) { if (isdigit(str[i])) { count++; } } if(count==0) printf("Doesn't contain digit"); else printf("Contains %d digit
", count); }