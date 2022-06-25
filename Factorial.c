#include<stdio.h>

void main()
{
int num;
printf("Input the number : ");
scanf("%d",&num);
int result = fact(num);



printf("The Factorial of %d is: %d\n",num,result);



}

int fact(int n)
{
int i, f=1;
for(i=1;i<=n;i++)
f=f*i;



return f;
}

