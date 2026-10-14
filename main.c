/**********************************************************************************
 * @file main.c
 * @brief  Activity 15
 * @author Jonathan Cortes
 * @date 10/12/2026
 * @version 
 * @copyright Copyright (C) 2026 Jonathan Cortes. All rights reserved.
**********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(void)
{
    dataStruct *data = NULL;
    dataStruct **ptrArray;
    dataStruct minimum, maximum;
    float average;
    int size, i;

    /* Read the data and allocate memory*/
    size = parseFile("sunspot.dat", &data);

    if (size <= 0)
    {
        printf("Error reading file.\n");
        free(data);
        return 1;
    }
/* Allocate array of pointers for compliance between
    min.c, max.c, ave.c */
    ptrArray = malloc(size * sizeof(*ptrArray));

    if (ptrArray == NULL)
    {
        printf("Memory allocation failed.\n");
        free(data);
        return 1;
    } 
    
    for (i = 0; i < size; i++)
    {
        ptrArray[i] = &data[i];
    }

    /* Calculate average, minimum, maximum*/
    average = ave(ptrArray, size);
    minimum = min(ptrArray, size);
    maximum = max(ptrArray, size);
    /* Print results*/
    printf("Average: %.2f\n", average);
    printf("Minimum: %.2f (Year: %d)\n",
            minimum.value, minimum.year);
    printf("Maximum: %.2f (Year: %d)\n",
            maximum.value, maximum.year);
    /* Free up the dynamically allocated memory*/
    free(ptrArray);
    free(data);

    return 0;
}