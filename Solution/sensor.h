#ifndef SENSOR_H
#define SENSOR_H

#include <pthread.h>

typedef struct {
    int *readings;
    int count;
    pthread_mutex_t lock;
} SensorData;

SensorData* init_sensor(int count);
void free_sensor(SensorData* s);
void* sensor_thread(void* arg);
double compute_average(SensorData* s);

#endif
