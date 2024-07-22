#include <stdio.h>
#include <stdlib.h>
#include "random.h"

int random_nb(int min, int max)
{
    int value = (int)(((double)rand()) * (double)(max - min) / (double)RAND_MAX) + min;
    return value;
}
