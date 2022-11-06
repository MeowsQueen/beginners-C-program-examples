// To calculate Area and Circumference of a circle
#include <stdio.h>
int main() {
    float area_circle,radius,circumference_circle;
    printf("enter a radius value for area and circumference of the circle\n");
    scanf("%f",&radius);
    area_circle = 3.14 * radius * radius;
    circumference_circle = 2*3.14*radius;
    printf("the area of the circle is %f and the circumference of the circle is %f",area_circle,circumference_circle);
    return 0;
}
