#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 0, b = 1, c, n;
    printf("Enter the number upto fibonacci want-");
    scanf("%d", &n);
    printf("%d\n%d\n", a, b);
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
}