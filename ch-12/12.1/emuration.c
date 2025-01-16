#include <stdio.h>

enum Days
{
    sun,
    monday,
    Tuseday,
    wensday = 11,
    Thrsday,
    Friday,
    Saterday
};

void main()
{
    printf("Sun:%d\t\n", sun);
    printf("monday:%d\t\n", monday);
    printf("Thseday:%d\t\n", Tuseday);
    printf("wensday:%d\t\n", wensday);
    printf("Thrsday:%d\t\n", Thrsday);
    printf("Friday:%d\t\n", Friday);
    printf("Saterday:%d\t\n", Saterday);
}