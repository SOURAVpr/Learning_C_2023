#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
} logEntry;

int extractData(logEntry entries[]) {
    FILE *file;
    char line[100];
    int count = 0;
    file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return -1;
    }
    fgets(line, sizeof(line), file);
    while (fgets(line, sizeof(line), file) != NULL) {
        logEntry entry;
        char *token = strtok(line, ",");
        entry.entryNo = atoi(token);
        token = strtok(NULL, ",");
        strncpy(entry.sensorNo, token, sizeof(entry.sensorNo));
        token = strtok(NULL, ",");
        entry.temperature = atof(token);
        token = strtok(NULL, ",");
        entry.humidity = atoi(token);
        token = strtok(NULL, ",");
        entry.light = atoi(token);
        token = strtok(NULL, ",");
        strncpy(entry.time, token, sizeof(entry.time));
        entries[count++] = entry;
    }
    fclose(file);
    return count;
}
void displayData(logEntry entries[], int count) {
    printf("EntryNo  SensorNo  Temperature  Humidity  Light  Time\n");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        logEntry entry = entries[i];
        printf("%-8d %-9s %-12.2f %-9d %-6d %s\n", entry.entryNo, entry.sensorNo, entry.temperature, entry.humidity, entry.light, entry.time);
    }
    printf("-------------------------------------------------------------\n");
}

int main() {
    logEntry entries[MAX];
    int count;
    count = extractData(entries);
    if (count > 0) {
        displayData(entries, count);
    }
    return 0;
}