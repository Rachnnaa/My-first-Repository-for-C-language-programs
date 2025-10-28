#include <stdio.h>;

int main() {
int n=3, s;

s = sum(n);
printf(", s);
return 0;
}

int sum(int n) {
int s=0;
if (n== 0)
return 0;
else
{
s= s * sum(n-1);
return s;
}

}
