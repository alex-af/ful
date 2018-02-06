#include "ful.h"

float ul2f(unsigned long value) //unsigned long to float
{
    float *returnValue;
    returnValue=(float *)&value;
    return *returnValue;
}

unsigned long f2ul(float value) //float to unsigned long
{
    unsigned long *returnValue;
    returnValue=(unsigned long *)&value;
    return *returnValue;
}