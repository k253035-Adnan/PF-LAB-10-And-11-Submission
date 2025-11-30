#include <stdio.h>
#include <string.h>

struct Movie {
    char title[50];
    char genre[30];
    char director[50];
    int releaseYear;
    float rating;
};

int main() {
    struct Movie movies[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- Movie Menu ---\n");
        printf("1. Add New Movie\n");
        printf("2. Search by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter movie title: ");
            scanf(" %49s", movies[count].title);

            printf("Enter genre: ");
            scanf(" %29s", movies[count].genre);

            printf("Enter director name: ");
            scanf(" %49s", movies[count].director);

            printf("Enter release year: ");
            scanf("%d", &movies[count].releaseYear);

            printf("Enter rating (0-10): ");
            scanf("%f", &movies[count].rating);
            count++;
            printf("Movie added successfully!\n");
        }

        else if (choice == 2) {
            char searchGenre[30];
            printf("Enter genre to search: ");
            scanf(" %29s", searchGenre);
            int found = 0;
            printf("\n--- Search Results ---\n");

            for (int i = 0; i < count; i++) {
                if (strcmp(movies[i].genre, searchGenre) == 0) {
                    printf("\nTitle: %s\n", movies[i].title);
                    printf("Genre: %s\n", movies[i].genre);
                    printf("Director: %s\n", movies[i].director);
                    printf("Release Year: %d\n", movies[i].releaseYear);
                    printf("Rating: %.1f\n", movies[i].rating);
                    found = 1;
                }
            }

            if (!found) {
                printf("No movies found for this genre.\n");
            }
        }
        else if (choice == 3) {
            printf("\n--- All Movies ---\n");

            if (count == 0) {
                printf("No movies added yet.\n");
            }
            for (int i = 0; i < count; i++) {
                printf("\nMovie %d:\n", i + 1);
                printf("Title: %s\n", movies[i].title);
                printf("Genre: %s\n", movies[i].genre);
                printf("Director: %s\n", movies[i].director);
                printf("Release Year: %d\n", movies[i].releaseYear);
                printf("Rating: %.1f\n", movies[i].rating);
            }
        }
        else if (choice == 4) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

