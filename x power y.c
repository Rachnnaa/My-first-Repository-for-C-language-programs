#include <stdio.h>
int power(int , int ) ;
int main()
{
    int x, y, result;
    printf("Enter x number: ");
    scanf("%d", &x);
    printf("Enter power number y: ");
    scanf("%d", &y);
    result = power(x, y);
    printf("power= %d",  result);
    return 0;
}

int power(int x, int y) 
{
    int result;
    if (y== 0)
    return 1;
    else
    {
        result= (x * power(x, y - 1));
        return result;
    }
}


