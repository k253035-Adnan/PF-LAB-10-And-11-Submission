#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    fp = fopen("myfile.txt", "r"); 

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == ' ' || ch == '\n' || ch == '\t')
            words++;
        if (ch == '\n')
            lines++;
    }
    fclose(fp);

    if (characters > 0)
        words++; 

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}

