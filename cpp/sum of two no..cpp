#include<stdio.h>
using namespace std;
int sum(int a,int b);
int main()
{
int a,b,c;
printf("enter two nos.");
scanf("%d%d",&a,&b);
  c = sum(a,b);
printf("sum of %d and %d is %d",a,b,c);
return 0;
}
int sum(int a,int b)
{int c;
 c = a+b;
 return c;
}

