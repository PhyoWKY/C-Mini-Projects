#include <stdio.h>
#include <math.h>

int main(){

    // CIRCLE CALCULATOR PROGRAM

    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * pow(radius,2);
    surface_area = 4 * PI * pow(radius, 2);
    volume = (4.0/3.0) * PI * pow(radius, 3);

    printf("Area of the circle: %.4lf\n", area);
    printf("Surface Area of the circle: %.4lf\n", surface_area);
    printf("Volume of the circle: %.4lf\n", volume);


    return 0;
}