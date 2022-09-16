#include <stdio.h>

void squares(int);
int main()
{
    int num;   

    printf("Enter a number\n");
    scanf("%d", &num);

    squares(num);
    return 0;
}

void squares(int n)
{

    if (n > 0)
    {
        squares(n-1);
        printf("%d ", n*n);
    }
    
}