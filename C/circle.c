#include <stdio.h>

int main(void)
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumference: %lf", circumference);
    printf("\nArea: %lf", area);

    return 0;
}