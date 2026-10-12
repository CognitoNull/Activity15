#include "functions.h"

float ave(dataStruct *data[], int size)
{
    float total = 0.0;
    for (int i = 0; i < size; i++)
    {
        total += data[i]->value;
    }
    return total/length;
}