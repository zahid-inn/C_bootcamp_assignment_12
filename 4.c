#include <stdio.h>

void Odd_nums(int);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    Odd_nums(num);

    return 0;
}

void Odd_nums(int n)
{

    if (n > 0)
    {
        printf("%d ", 2 * n - 1);
        Odd_nums(n - 1);
    }
}