#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year;
    char branch;
    _Bool isInternship = false;

    printf("Enter the year (1-4):\n");
    scanf("%d", &year);

    if (year == 2 || year == 3 || year == 4) {
        printf("Enter the branch (CSE:C, ECE:E, MECH:M):\n");
        scanf(" %c", &branch);
    }

    if (year == 4) {
        int internship;
        printf("Student enrolled in internship? (Yes:1, No:0):\n");
        scanf("%d", &internship);
        isInternship = internship == 1;
    }

    switch (year) {
    case 1:
        printf("Physics\n");
        printf("Chemistry\n");
        printf("Maths\n");
        break;

    case 2:
        switch (branch) {
        case 'C':
            printf("C Programming\n");
            printf("Computer Organisation\n");
            printf("Web Development\n");
            break;

        case 'E':
            printf("Signal Processing\n");
            printf("Logic Design\n");
            printf("Network Analysis\n");
            break;

        case 'M':
            printf("Thermodynamics\n");
            printf("Solid Mechanics\n");
            printf("Heat Transfer\n");
            break;

        default:
            printf("Invalid Branch\n");
        }
        break;

    case 3:
        switch (branch) {
        case 'C':
            printf("Object-Oriented Programming\n");
            printf("DBMS\n");
            printf("Data Structures and Algorithms\n");
            break;

        case 'E':
            printf("Analog Electronics\n");
            printf("Embedded Systems\n");
            printf("Microcontrollers\n");
            break;

        case 'M':
            printf("Applied Mechanics\n");
            printf("Kinematics\n");
            printf("Mechatronics\n");
            break;

        default:
            printf("Invalid Branch\n");
        }
        break;

    case 4:
        if (isInternship) {
            printf("Enrolled into Internship Program\n");
        } else {
            switch (branch) {
            case 'C':
                printf("Operating System\n");
                printf("Computer Networks\n");
                printf("Compiler Design\n");
                break;

            case 'E':
                printf("VLSI Design\n");
                printf("Fiber Optic Communication\n");
                printf("Digital Electronics\n");
                break;

            case 'M':
                printf("Mechanics of Materials (MOM)\n");
                printf("Strength of Materials (SOM)\n");
                printf("Machine Design\n");
                break;

            default:
                printf("Invalid Branch\n");
            }
        }
        break;

    default:
        printf("Invalid Year\n");
    }

    return 0;
}
