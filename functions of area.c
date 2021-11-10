#include <stdio.h>
long  area (long radius);
long input,answer;
int main(void)
{
    printf("Enter an integer value");
    scanf("%ld",&input);
    answer=area(input);
    printf("\n the area of %ld is%ld",input,answer);
    return 0;
}
long area(long radius)
{
    long area,pi;
    pi=3.142;
    area=pi*radius*radius;
    return area;
}
