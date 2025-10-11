#include <stdio.h>

int main(){
    float h, b, area;

    printf("Enter height : ");
    scanf("%f", &h);

    printf("Enter base : ");
    scanf("%f", &b);

    area = (h*b)/2.0;

    printf("Area = %.1f\n", area);

    return 0;
}
