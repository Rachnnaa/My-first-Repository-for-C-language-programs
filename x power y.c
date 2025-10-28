#include <stdio.h>

int main()
{
int n=3, s;

s = sum(n);
printf(" Sum of three digit=%d",s);
return 0;
}

int sum(int n) 
{
int s=0;
if (n== 0)
return 0;
else
{
s= s * sum(n-1);
return s;
}


