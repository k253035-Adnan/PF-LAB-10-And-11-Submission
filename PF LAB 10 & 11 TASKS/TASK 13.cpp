#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int empty = 1;

    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fclose(fp);

    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    ch = fgetc(fp);

    if (ch == EOF)
        printf("File is empty.\n");
    else
        printf("File is NOT empty.\n");

    fclose(fp);

    return 0;
}

