#include <stdio.h>

int main() {
    FILE *f1, *f2, *fout;
    char ch;

    f1 = fopen("file1.txt", "r");
    if (f1 == NULL) {
        printf("Error opening file1.txt\n");
        return 1;
    }

    f2 = fopen("file2.txt", "r");
    if (f2 == NULL) {
        printf("Error opening file2.txt\n");
        return 1;
    }

    fout = fopen("merged.txt", "w");
    if (fout == NULL) {
        printf("Error creating merged.txt\n");
        return 1;
    }

    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, fout);
    }

    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, fout);
    }
    printf("Files merged successfully into merged.txt\n");

    fclose(f1);
    fclose(f2);
    fclose(fout);

    return 0;
}

