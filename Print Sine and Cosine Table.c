#include <stdio.h>
#include <math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
    double interval;
    int i; /* initializing variables */


    printf("Below is a sine table\n"); /*printing table of sine and cosine values*/
    for (i = 0; i < 30; i++)
    {
        interval = i / 10.0;
        printf("\nsin(%lf) = %lf \t cos(%lf) = %lf \t", interval, fabs(sin(interval)), interval, fabs(cos(interval)));
        /* print newline, then print sine value first, then horizontal tab, and lastly print cosine value*/ 
    }

    return 0;
}