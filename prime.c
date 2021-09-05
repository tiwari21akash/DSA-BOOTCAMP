#include <stdio.h>
#include <conio.h>
void main()
{
    int n, m = 0, f = 0;
    printf("Enter the numbers-");
    scanf("%d%d", &n);
    m = n / 2;
    for (int i = 2; i < m; i++)
    {
        if (n % 2 == 0)
        {
            printf("Number is not prime number - %d", n);
            f = 1;
            break;
        }
    }

    if (f == 0)
    {
        printf("Number is a prime number - %d", n);
    }
}