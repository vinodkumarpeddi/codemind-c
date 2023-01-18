#include<stdio.h>
int main()
{ int i,n,element;
scanf("%d",&n); 
int a[n];
for(i=0; i<n; i++)
scanf("%d", &a[i]);
scanf("%d",&element);
for(i=0; i<n; i++)
{ if(a[i]==element)
{ printf("True");
return 0; 
    
} 
    
} printf("False");
    
}