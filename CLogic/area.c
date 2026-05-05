#include <stdio.h>
float area(float r) {
    return 3.14 * r * r;
}
void main() {
    float radius;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    printf("The area of circle is %f\n", area(radius));
}