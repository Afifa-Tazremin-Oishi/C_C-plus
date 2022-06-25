#include<stdio.h>
int main(){
int a[5]={5,1,15,20,25};
int i,j,k;
i = a[1];
j = a[1]++;
k = a[i++];
printf("%d %d %d\n",i,j,k);
}
