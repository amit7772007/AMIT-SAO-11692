/*
Project Title : Toll Booth Vehicle Count System
Description   : This program counts different types of vehicles
                passing through a toll booth using 1D arrays.
Concepts Used : 1D Arrays, Loops, Conditional Statements, Functions
Developed By  : < AMIT SAO>
College       : < RUNGTA INTERNATIONAL SKILL UNIVERSITY >
*/

#include <stdio.h>

#define VEHICLE_TYPES 4

// Function to display vehicle report
void displayReport(int vehicles[]) {
    int total = 0;

    printf("\n========== Toll Booth Vehicle Report ==========\n");
    printf("Cars   : %d\n", vehicles[0]);
    printf("Buses  : %d\n", vehicles[1]);
    printf("Trucks : %d\n", vehicles[2]);
    printf("Bikes  : %d\n", vehicles[3]);

    for(int i = 0; i < VEHICLE_TYPES; i++) {
        total += vehicles[i];
    }

    printf("----------------------------------------------\n");
    printf("Total Vehicles Passed : %d\n", total);
    printf("==============================================\n");
}

int main() {
    int vehicles[VEHICLE_TYPES] = {0, 0, 0, 0};
    int choice;

    printf("========== Toll Booth Vehicle Count System ==========\n");

    while(1) {
        printf("\nSelect Vehicle Type:\n");
        printf("1. Car\n");
        printf("2. Bus\n");
        printf("3. Truck\n");
        printf("4. Bike\n");
        printf("5. Exit and Show Report\n");
        printf("Enter your choice: ");

        // Input validation
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter numbers only.\n");

            // Clear invalid input buffer
            while(getchar() != '\n');
            continue;
        }

        if(choice == 5) {
            break;
        }

        if(choice < 1 || choice > 5) {
            printf("Invalid choice! Please select between 1 to 5.\n");
            continue;
        }

        switch(choice) {
            case 1:
                vehicles[0]++;
                printf("Car recorded successfully.\n");
                break;
            case 2:
                vehicles[1]++;
                printf("Bus recorded successfully.\n");
                break;
            case 3:
                vehicles[2]++;
                printf("Truck recorded successfully.\n");
                break;
            case 4:
                vehicles[3]++;
                printf("Bike recorded successfully.\n");
                break;
        }
    }

    displayReport(vehicles);
    return 0;
}

