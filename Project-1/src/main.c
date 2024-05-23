#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void parkVehicle(void);
void removeVehicle(void);
void displayParkedVehicle(void);

const int amountPerHour = 25;
const int parkingSpace = 10;
int currentOccupiedSpace = 0;

// store vehicle info
struct VehicleInfo {
    char driverName[20];
    char vehicleNum[10];
    int arrivalToken;
    int vehicleType;
};

struct VehicleInfo vehicle[parkingSpace];

void parkVehicle() {
    if (currentOccupiedSpace >= parkingSpace) {
        printf("Parking lot is full. Cannot park more vehicles.\n");
        return;
    }

    printf("Enter the Vehicle Type:\n");
    printf("1=Car\n2=Bike\n3=Bicycle\n");
    scanf("%d", &vehicle[currentOccupiedSpace].vehicleType);

    printf("Enter your name:\n");
    scanf("%s", vehicle[currentOccupiedSpace].driverName);

    printf("Enter the Vehicle Number:\n");
    scanf("%s", vehicle[currentOccupiedSpace].vehicleNum);

    printf("Enter the arrival token:\n");
    scanf("%d", &vehicle[currentOccupiedSpace].arrivalToken);

    currentOccupiedSpace++;
    printf("Vehicle parked successfully!\n");
}

void removeVehicle() {
    if (currentOccupiedSpace == 0) {
        printf("No vehicles to remove.\n");
        return;
    }

    int token;
    printf("Enter the arrival token of the vehicle to be removed:\n");
    scanf("%d", &token);

    int found = 0;
    for (int i = 0; i < currentOccupiedSpace; i++) {
        if (vehicle[i].arrivalToken == token) {
            found = 1;
            // Shift all the subsequent vehicles one position to the left
            for (int j = i; j < currentOccupiedSpace - 1; j++) {
                vehicle[j] = vehicle[j + 1];
            }
            currentOccupiedSpace--;
            printf("Vehicle removed successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Vehicle with the given token not found.\n");
    }
}

void displayParkedVehicle() {
    if (currentOccupiedSpace == 0) {
        printf("No vehicles parked.\n");
        return;
    }

    printf("Parked Vehicles:\n");
    printf("Type\tDriver Name\tVehicle Number\tArrival Token\n");
    for (int i = 0; i < currentOccupiedSpace; i++) {
        printf("%d\t%s\t\t%s\t\t%d\n",
               vehicle[i].vehicleType,
               vehicle[i].driverName,
               vehicle[i].vehicleNum,
               vehicle[i].arrivalToken);
    }
}

int main() {
    int option;

    while (1) {
        printf("\nWelcome to Sanyukta's Parking Lot\n");
        printf("Select Option:\n");
        printf("1. Park Vehicle\n");
        printf("2. Remove Vehicle\n");
        printf("3. Display Parked Vehicles\n");
        printf("4. Exit\n");
        printf("Please choose an option: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            parkVehicle();
            break;
        case 2:
            removeVehicle();
            break;
        case 3:
            displayParkedVehicle();
            break;
        case 4:
            printf("Thank you! Have a safe ride!\n");
            exit(0);
        default:
            printf("Invalid choice. Please select a valid option.\n");
        }
    }
    return 0;
}
