#include<stdio.h>
int main()
{
int m,n,sum=0;
printf("enter the value of m and n");
scanf("%d%d",&m,&n);
while(m<=n)
{
sum=sum+m;
m=m+1;
}
printf("sum=%d",sum);
}
