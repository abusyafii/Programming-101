#include <stdio.h>

int main()
{
    int x = 10;
    int y = 10;

    if (x < y)
    {
        printf("Y is Win");
    }
    else if (x > y)
    {
        printf("X is Win");
    }
    else
    {
        printf("Draw");
    }
}