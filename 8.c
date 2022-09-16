#include <stdio.h>

void binary(int);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    binary(num);

    return 0;
}
void binary(int n)
{
    if (n > 0)
    {
        binary(n / 2);
        printf("%d", n % 2);
    }
}