#include<stdio.h>
int main()
{
    float radius,area;
    const float PI=3.14;
    printf("Enter the radius of circle:");
        scanf("%f",&radius);
        area=PI*radius*radius;
        printf("area of circle=%2f",area);
        return 0;
}
