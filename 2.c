#include <stdio.h>

void natural_Nums(int);
int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    natural_Nums(num);

    return 0;
}

void natural_Nums(int n)
{

    if (n > 0)
    {
        printf("%d ", n);
        natural_Nums(--n);
    }
    
}