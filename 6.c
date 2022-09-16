#include <stdio.h>

void Even_nums(int);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    Even_nums(num);

    return 0;
}

void Even_nums(int n)
{
    if (n > 0)
    {
        printf("%d ", 2 * n);
        Even_nums(n - 1);
    }
}