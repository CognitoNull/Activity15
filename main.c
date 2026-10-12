/**********************************************************************************
 * @file main.c
 * @brief  Activity 15
 * @author Jonathan Cortes
 * @date 10/12/2026
 * @version 
 * @copyright Copyright (C) 2026 Jonathan Cortes. All rights reserved.
**********************************************************************************/

#include <stdio.h>
#include <sdlib.h>
#include "functions.h"

int main(void)
{
    FILE *fp;

    fp = fopen("sunspot.dat", "r");

    if (fp == NULL) 
    {
        printf("Error opening file. \n");
        return 1;
    }
    /* Read the data and allocate memory*/

    /* Calculate average, minimum, maximum*/

    /* Print results*/

    /* Free up the dynamically allocated memory*/

    fclose(fp);

    return 0;
}