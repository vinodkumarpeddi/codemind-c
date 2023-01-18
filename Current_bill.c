#include<stdio.h>
int main()
{ float a,b,c,d,e; 
scanf("%f",&a);
b=(a*1.20)+100;
c=(a*1.50)+100; 
d=(a*1.8)+(a*1.8*0.15);
e=(a*2.0)+(a*2.0*0.15); 
if (a<=199)
{ printf("%0.2f",b); }
else if(a>=200 && a<400) 
{ printf("%0.2f",c); } 
else if(a>=400 && a<600) 
{ printf("%0.2f",d); }
else { printf("%0.2f",e); }
}