#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "sensor.h"
#include "utils.h"

int main(int argc, char* argv[]) {
    print_banner();
    char* config = read_file("config.txt");
    printf("Loaded config: %s\n", config);
    SensorData* sensor = init_sensor(50000);
    pthread_t t1, t2;
    pthread_create(&t1, NULL, sensor_thread, sensor);
    pthread_create(&t2, NULL, sensor_thread, sensor);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    double avg = compute_average(sensor);
    printf("Average reading: %f\n", avg);
    free_sensor(sensor);
    printf("Config again: %s\n", config);
    free(config);
    return 0;
}
    