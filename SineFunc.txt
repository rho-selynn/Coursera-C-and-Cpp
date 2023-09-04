#include<stdio.h>
#include<math.h>
#define PI 3.14159 // using the PI definition from this course
int main()
{
    double input,result;
    printf("Enter a number: ");
    scanf("%lf", &input);
    result = sin(input);
    printf("%lf", result);
    return 0;

}