#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter the numbers-");
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("After the swapping numbers-a=%d\nb=%d", a, b);
}