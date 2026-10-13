/*
 * @file max.c
    * @brief This file contains the implementation of the max function.
    * @author Matthew Schiemann
 */


 #include <stdio.h>
 #include <stdlib.h>
 #include "functions.h"

 /**
  * Returns the maximum of the Array of Struct
  */
 dataStruct max(dataStruct *data[], int size) {
    int maxIndex = 0;

    for (int i = 0; i < size; i++) {
        if (data[i]->value > data[maxIndex]->value) {
            maxIndex = i;
        }
    }

    return *data[maxIndex];

 }