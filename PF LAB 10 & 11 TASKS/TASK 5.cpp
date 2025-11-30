#include <stdio.h>
#include <string.h>

struct Player {
    char name[30];
    int age;
    char position[30];
};

struct Team {
    char teamName[30];
    char sport[30];
    struct Player players[10];
    int count;  
};

void addPlayer(struct Team *t) {
    printf("\nEnter player name: ");
    scanf("%s", t->players[t->count].name);

    printf("Enter age: ");
    scanf("%d", &t->players[t->count].age);

    printf("Enter position: ");
    scanf("%s", t->players[t->count].position);

    t->count++;
}

void searchPosition(struct Team t) {
    char pos[30];
    int found = 0;

    printf("\nEnter position to search: ");
    scanf("%s", pos);

    printf("\nPlayers in position %s:\n", pos);

    for (int i = 0; i < t.count; i++) {
        if (strcmp(t.players[i].position, pos) == 0) {
            printf("Name: %s, Age: %d\n", t.players[i].name, t.players[i].age);
            found = 1;
        }
    }

    if (!found) {
        printf("No player found.\n");
    }
}

void displayTeam(struct Team t) {
    printf("\n--- Team Details ---\n");
    printf("Team Name: %s\n", t.teamName);
    printf("Sport: %s\n", t.sport);

    for (int i = 0; i < t.count; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Name: %s\n", t.players[i].name);
        printf("Age: %d\n", t.players[i].age);
        printf("Position: %s\n", t.players[i].position);
    }
}

int main() {
    struct Team t;
    t.count = 0;

    printf("Enter team name: ");
    scanf("%s", t.teamName);

    printf("Enter sport: ");
    scanf("%s", t.sport);

    int choice;

    do {
        printf("\n1. Add Player\n2. Search by Position\n3. Display Team\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) addPlayer(&t);
        else if (choice == 2) searchPosition(t);
        else if (choice == 3) displayTeam(t);

    } while (choice != 4);

    return 0;
}

