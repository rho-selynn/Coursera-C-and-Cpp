/*
Playing around with enum
August 18, 2023
*/

#include <stdio.h>

// Computing the next day
enum day {sun, mon, tue, wed, thu, fri, sat}; //declare type
typedef enum day day;

//void print_day(enum day d)
void print_day(day d)
{
    switch(d){
        case sun: printf(" sunday "); break;
        case mon: printf(" monday "); break;
        case tue: printf(" tuesday "); break;
        case wed: printf(" wednesday "); break;
        case thu: printf(" thursday "); break;
        case fri: printf(" friday "); break;
        case sat: printf(" saturday "); break;
        default: printf("%d is an error", d);
    }
}

//enum day next_day(enum day d)
day next_day(day d)
{
    return(d + 1 % 7); // add to d to get next element in enum day
}

int main()
{
    enum day today = mon;
    print_day(today);
    printf("\n\n");
    print_day(85);
    printf("\n\n");
    print_day(next_day(today));
    printf("\n\n");
    return 0;
}