#include <stdio.h>
#include <string.h>

struct Flight {
    int flightNumber;
    char departure[50];
    char destination[50];
    char date[20];
    int availableSeats;
};
void displayFlight(struct Flight f) {
    printf("\n--- Flight Details ---\n");
    printf("Flight Number: %d\n", f.flightNumber);
    printf("Departure: %s\n", f.departure);
    printf("Destination: %s\n", f.destination);
    printf("Date: %s\n", f.date);
    printf("Available Seats: %d\n", f.availableSeats);
}

void bookSeat(struct Flight *f) {
    if ((*f).availableSeats > 0) {
        (*f).availableSeats = (*f).availableSeats - 1;
        printf("\nSeat booked successfully!\n");
    } else {
        printf("\nSorry, no seats available.\n");
    }
}

int main() {
    struct Flight f;

    printf("Enter flight number: ");
    scanf("%d", &f.flightNumber);

    printf("Enter departure city: ");
    scanf(" %s", f.departure);

    printf("Enter destination city: ");
    scanf(" %s", f.destination);

    printf("Enter date: ");
    scanf(" %s", f.date);

    printf("Enter available seats: ");
    scanf("%d", &f.availableSeats);

    int choice;

    while (1) {
        printf("\n1. Display Flight Details");
        printf("\n2. Book a Seat");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            displayFlight(f);
        }
        else if (choice == 2) {
            bookSeat(&f); 
        }
        else if (choice == 3) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

