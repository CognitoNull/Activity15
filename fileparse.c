/**
 * @file fileparse.c
 * @author Dylan Karcher
 * @brief Parse the file
 * @version 1.0
 * @date 10/12/2026
 * 
 * @copyright Copyright (c) 2026
 * 
 */

 #include "functions.h"

 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>

 int parseFile(char* fileName, dataStruct** array)
 {
    // Open file
    FILE* file = fopen(fileName, "r");
    if(file == NULL) // If file is not open
    {
        printf("Failed to open file\n");
        return -1;
    }

    int size = 0;

    // Allocating pointer
    *(array) = (dataStruct*)malloc(0);

    // Temporary for parsing each line
    char line[20];

    // While the next line is not null
    while(fgets(line, 20, file) != NULL)
    {
        // Increase size and reallocate
        *(array) = (dataStruct*)realloc(*(array), (++size) * sizeof(dataStruct));

        // Declare temporary token to get year
        char* token = strtok(line, " \t\n");

        // Set year of new data
        (*array)[size - 1].year = atoi(token);

        // Get value from data
        token = strtok(NULL, " \t\n");

        // Set data value
        (*array)[size - 1].value = atof(token);
    }

    return size;
 }