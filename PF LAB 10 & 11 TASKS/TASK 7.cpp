#include <stdio.h>

int countVowels(char str[], int i) {
    if (str[i] == '\0')
        return 0;

    char ch = str[i];

    int isVowel = (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                   ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');

    return isVowel + countVowels(str, i + 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    int total = countVowels(str, 0);

    printf("Total vowels: %d\n", total);

    return 0;
}

