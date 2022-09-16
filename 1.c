#include <stdio.h>

void printN(int n);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    printN(num);

    return 0;
}

void printN(int n)
{
    if (n > 0)
    {
        printN(n - 1);
        printf("%d ", n);
    }
}