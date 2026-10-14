/**********************************************************************************
 * @file min.c
 * @brief  Activity 15 minimum calculation function.
 * @author Jonathan Cortes
 * @date 10/14/2026
 * @version 
 * @copyright Copyright (C) 2026 Jonathan Cortes. All rights reserved.
**********************************************************************************/

#include "functions.h"

dataStruct min(dataStruct *data[], int size)
{
    int minIndex = 0;
    int i;
    
    for (i = 1; i < size; i++)
    {
        if (data[i]->value < data[minIndex]->value)
        {
            minIndex = i;
        }
    }

    return *data[minIndex];
}