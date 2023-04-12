#include <stdio.h>

int main() {

    const double PI = 3.14159;
    double radius;
    double circmuference ;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);


    circmuference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\ncircmuference: %lf", circmuference);
    printf("\narea: %lf", area);

    return 0;
}