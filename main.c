#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"

#define PI 3.14159

void render_header() {
    printf("---------------------------------------------------\n");
    printf("\t\t   MidTerm\n");
    printf("\t\tName: Kamonchai Taokrue\n");
    printf("---------------------------------------------------\n");
    printf("\t\t   Menu Test\n");
    printf("1. Circumference of a Circle Calculator\n");
    printf("2. Area of a Circle Calculator\n");
    printf("3. Surface Area of a Sphere Calculator\n");
    printf("4. Volume of a Sphere Calculator\n");
    printf("5. Exit\n");
    printf("Please select Menu Test by entering a number [1-5] = \n");
}

bool awaitConfirm() {
    printf("If you want to use Calculator, please click [y/Y] = \n");

    char isConfirm;

    isConfirm = getch();

    if (isConfirm == 'y' || isConfirm == 'Y') {
        return true;
    }

    return false;
}

bool PasswordChecker(int counter) {
    if (counter == 3) {
        return false;
    }

    if (counter == 0) {
        printf("This password has incorrect, please put correct password: ");
    } else {
        printf("\nThis password has incorrect, please put correct password: ");
    }

    char password[20];

    scanf("%s", password);

    if (strcmp(password, "kanantem99") == 0) {
        return true;
    }

    counter++;

    return PasswordChecker(counter);
}

void Circumference_Circle() {
    system("cls");

    printf("1. Circumference of a Circle Calculator\n");
    printf("           formula\n");
    printf("    Circumference = 2*pi*r\n");
    printf("when pi = 3.14159\n");
    printf("     r  = radius\n");

    if (!awaitConfirm()) {
        return;
    }

    system("cls");
    printf("1. Circumference of a Circle Calculator\n");
    printf("           formula\n");
    printf("    Circumference = 2*pi*r\n");
    printf("r of a circle = ");

    double radius = 0;

    scanf("%lf", &radius);
    printf("Circumference = %.3f\n", 2 * PI * radius);

    if (!awaitConfirm()) {
        return;
    }

    Circumference_Circle();
}

void Area_Circle() {
    system("cls");

    printf("2. Area of a Circle Calculator\n");
    printf("           formula\n");
    printf("         Area = pi*r^2\n");
    printf("when pi = 3.14159\n");
    printf("     r  = radius\n");

    if (!awaitConfirm()) {
        return;
    }

    system("cls");
    printf("2. Area of a Circle Calculator\n");
    printf("           formula\n");
    printf("         Area = pi*r^2\n");
    printf("Area = ");

    double radius = 0;

    scanf("%lf", &radius);
    printf("Area = %.3f\n", PI * radius * radius);

    if (!awaitConfirm()) {
        return;
    }

    Area_Circle();
}

void Surface_Area_Sphere() {
    system("cls");

    printf("3. Surface Area of a Sphere Calculator\n");
    printf("           formula\n");
    printf("    Surface Area = 4*pi*r^2\n");
    printf("when pi = 3.14159\n");
    printf("     r  = radius\n");

    if (!awaitConfirm()) {
        return;
    }

    if (!PasswordChecker(0)) {
        return;
    }

    system("cls");
    printf("3. Surface Area of a Sphere Calculator\n");
    printf("           formula\n");
    printf("    Surface Area = 4*pi*r^2\n");
    printf("r of a sphere = ");

    double radius = 0;

    scanf("%lf", &radius);
    printf("Surface Area = %.3f\n", 4 * PI * radius * radius);

    if (!awaitConfirm()) {
        return;
    }

    Surface_Area_Sphere();
}

void Volume_Sphere() {
    system("cls");

    printf("4. Volume of a Sphere Calculator\n");
    printf("           formula\n");
    printf("    Volume = (4/3)*pi*r^3\n");
    printf("when pi = 3.14159\n");
    printf("     r  = radius\n");

    if (!awaitConfirm()) {
        return;
    }

    if (!PasswordChecker(0)) {
        return;
    }

    system("cls");
    printf("4. Volume of a Sphere Calculator\n");
    printf("           formula\n");
    printf("    Volume = (4/3)*pi*r^3\n");
    printf("r of a sphere = ");

    double radius = 0;

    scanf("%lf", &radius);
    printf("Volume = %.3f\n", (4.0 / 3.0) * PI * radius * radius * radius);

    if (!awaitConfirm()) {
        return;
    }

    Volume_Sphere();
}

void main() {
    system("cls");
    char choice;

    render_header();

    do {
        choice = getch() - '0';

        if (choice == 1) {
            Circumference_Circle();
            
            return;
        } else if (choice == 2) {
            Area_Circle();

            return;            
        } else if (choice == 3) {
            Surface_Area_Sphere();

            return;
        } else if (choice == 4) {
            Volume_Sphere(); 

            return;
        } else if (choice == 5) {
            printf("\nAre you sure to Exit [y|Y]: ");

            char isConfirm;

            isConfirm = getch();

            if (isConfirm == 'y' || isConfirm == 'Y') {
                return;
            }

            main();
        } else {
            system("cls");

            render_header();

            printf("Incorrect, please click 1 2 3 4 or 5 for select Menu Test: ");
        }
    } while (choice != 5);

    return;
}