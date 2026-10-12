typedef struct 
{
    int year;
    float value;
} dataStruct;

dataStruct max(dataStruct *data[], int size);
dataStruct min(dataStruct *data[], int size);
float ave(dataStruct *data[], int size);
