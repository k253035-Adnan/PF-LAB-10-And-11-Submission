#include <stdio.h>
#include <time.h>

int main() {
    FILE *fp;
    time_t now;
    char *timeString;

    fp = fopen("log.txt", "a");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    time(&now);
    timeString = ctime(&now); 

    fprintf(fp, "Program executed at: %s", timeString);

    fclose(fp);

    printf("Timestamp added to log.txt\n");

    return 0;
}

