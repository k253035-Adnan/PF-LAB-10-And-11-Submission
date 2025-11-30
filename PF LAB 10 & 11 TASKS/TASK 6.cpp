#include <stdio.h>

struct Salary {
    float basic;
    float bonus;
    float deduction;
};

struct Employee {
    int id;
    char name[30];
    struct Salary sal;    
};

float calculateNetSalary(struct Employee e) {
    return e.sal.basic + e.sal.bonus - e.sal.deduction;
}

void displaySalary(struct Employee e) {
    float net = calculateNetSalary(e);

    printf("\n--- Employee Salary Details ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Basic Pay: %.2f\n", e.sal.basic);
    printf("Bonus: %.2f\n", e.sal.bonus);
    printf("Deduction: %.2f\n", e.sal.deduction);
    printf("Net Salary: %.2f\n", net);
}

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Basic Pay: ");
    scanf("%f", &e.sal.basic);

    printf("Enter Bonus: ");
    scanf("%f", &e.sal.bonus);

    printf("Enter Deduction: ");
    scanf("%f", &e.sal.deduction);

    displaySalary(e);

    return 0;
}

