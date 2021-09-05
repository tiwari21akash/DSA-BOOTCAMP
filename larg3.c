#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter the numbers-");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("Largest number is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("Largest nmber is %d", b);
    }
    else
    {
        printf("Largest nmber is %d", c);
    }
}