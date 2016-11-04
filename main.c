#include <stdio.h>
#include <stdlib.h>
int addition (int a, int b)
{
    return a+b;
}
int main()
{
    printf("a+b=%d", addition(1,4));
    printf("l'addition de a et b vaux : %d", addition(1,4));
    return 0;
}
