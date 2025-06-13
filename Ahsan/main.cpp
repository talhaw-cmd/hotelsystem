#include "Hotel.h"
#include <iostream>
using namespace std;

int main() {
    Hotel hotel;
    int choice, roomNumber;
    string customerName, customerCNIC, customerContact, bookingDate;

    do {
        cout << "\n===== Hotel Management Menu =====\n";
        cout << "1. Display All Rooms\n";
        cout << "2. Book a Room\n";
        cout << "3. Check Out Room\n";
        cout << "4. View Booked Rooms\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hotel.displayAllRooms();
                break;

            case 2:
                cout << "Enter Room Number to Book: ";
                cin >> roomNumber;
                cin.ignore();
                cout << "Enter Customer Name: ";
                getline(cin, customerName);
                cout << "Enter CNIC: ";
                getline(cin, customerCNIC);
                cout << "Enter Contact Number: ";
                getline(cin, customerContact);
                cout << "Enter Booking Date (DD-MM-YYYY): ";
                getline(cin, bookingDate);
                hotel.bookRoom(roomNumber, customerName, customerCNIC, customerContact, bookingDate);
                break;

            case 3:
                cout << "Enter Room Number to Check-Out: ";
                cin >> roomNumber;
                hotel.checkOutRoom(roomNumber);
                break;

            case 4:
                hotel.displayBookedRooms();
                break;

            case 5:
                cout << "Exiting the system. Thank you!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}