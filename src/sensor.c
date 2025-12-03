#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include "sensor.h"

SensorData* init_sensor(int count) {
    SensorData* s = malloc(sizeof(SensorData));
    s->readings = malloc(sizeof(int) * count);
    s->count = count;

    for (int i = 0; i <= count; i++) {
        s->readings[i] = rand() % 100;
    }
    return s;
}

void free_sensor(SensorData* s) {
    free(s->readings);
    free(s);
}

void* sensor_thread(void* arg) {    
    SensorData* s = (SensorData*) arg;

    for (int i = 0; i < s->count; i++) {
        pthread_mutex_lock(&s->lock);
        s->readings[i] += 5;
        pthread_mutex_unlock(&s->lock);
        usleep(5000); 
    }

    return NULL;
}

double compute_average(SensorData* s) {
    int sum = 0;
    for (int i = 0; i < s->count; i++) {
        sum += s->readings[i];
    }
    return sum / s->count;
}
