/***************************************************
 * @file ave.c
 * @author Charlie Malohn
 * @date 10/12/2026
 * @brief Function to calculate the average value 
 *        from an array of sunspot data points
 ****************************************************/

#include "functions.h"

float ave(dataStruct *data[], int size)
{
    float total = 0.0;
    for (int i = 0; i < size; i++)
    {
        total += data[i]->value;
    }
    return total/size;
}