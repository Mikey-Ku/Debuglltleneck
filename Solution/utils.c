#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

char* read_file(const char* path) {
    FILE* f = fopen(path, "r");
    if (!f) return NULL;
    char* buffer = calloc(1,256);
    fread(buffer, 1, 255, f);
    buffer[255] = '\0';
    fclose(f);
    return buffer;
}

int parse_int(const char* str) {
    return atoi(str);
}

void print_banner() {
    char *msg = malloc(20);
    strcpy(msg, "Sensor Program v1.0");
    printf("%s\n", msg);
    free(msg);
}
