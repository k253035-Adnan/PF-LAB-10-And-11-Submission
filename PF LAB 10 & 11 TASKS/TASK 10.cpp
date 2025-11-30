#include <stdio.h>
#include <string.h>

int isPalindrome(char word[]) {
    int i = 0;
    int j = strlen(word) - 1;

    while (i < j) {
        if (word[i] != word[j])
            return 0; 
        i++;
        j--;
    }
    return 1; 
}

int main() {
    char words[5][20];
    int i;
    printf("Enter 5 words:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", words[i]);
    }
    printf("\nResults:\n");
    for (i = 0; i < 5; i++) {
        if (isPalindrome(words[i]))
            printf("%s = Palindrome\n", words[i]);
        else
            printf("%s = Not Palindrome\n", words[i]);
    }
    return 0;
}

