#include<stdio.h>
void main()
{
 int a[5]= {10,20,30,40,50};
int i,c,b;
 printf("%d", a[5]);
 printf("please enter elemnet index ");
 scanf("%d", &i);
 printf("enter base add \n");
scanf("%d",&b);

 c = b + (4 * (i-1));
 printf(" address is %d\n", c);
}

