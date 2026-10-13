typedef struct 
{
    int year;
    float value;
} dataStruct;

int parseFile(char* fileName, dataStruct** array);
dataStruct max(dataStruct *data[], int size);
dataStruct min(dataStruct *data[], int size);
float ave(dataStruct *data[], int size);
