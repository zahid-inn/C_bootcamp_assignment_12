#include <stdio.h>

void octal(int n);
int main()
{
    int num;

    printf("Enter number\n");
    scanf("%d", &num);

    octal(num);

    return 0;
}
void octal(int n)
{
    if (n > 0)
    {
        octal(n / 8);
        printf("%d", n % 8);
    }
}