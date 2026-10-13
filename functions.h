/*******************************************************
 * @file functions.h
 * @date 10/12/2026
 * @brief Holds all definitions needed for the program
 *        This includes the data structure and functions
 *******************************************************/

typedef struct 
{
    int year;
    float value;
} dataStruct;

int parseFile(char* fileName, dataStruct** array);
dataStruct max(dataStruct *data[], int size);
dataStruct min(dataStruct *data[], int size);
float ave(dataStruct *data[], int size);
