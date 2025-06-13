#pragma once
#include <iostream>
#include <string>
using namespace std;

// ================= Developer: Talha =================
class Room {
private:
    int roomNumber;
    string roomType;
    double price;
    bool isBooked;
    string customerName;
    string customerCNIC;
    string customerContact;
    string bookingDate;

public:
    Room(int num, string type, double p) {
        roomNumber = num;
        roomType = type;
        price = p;
        isBooked = false;
    }

    void displayInfo() {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Type: " << roomType << endl;
        cout << "Price: $" << price << endl;
        cout << "Status: " << (isBooked ? "Booked" : "Available") << endl;
        if (isBooked) {
            cout << "Booked By: " << customerName << endl;
            cout << "CNIC: " << customerCNIC << endl;
            cout << "Contact: " << customerContact << endl;
            cout << "Date: " << bookingDate << endl;
        }
        cout << "-----------------------------" << endl;
    }

    bool getIsBooked() {
        return isBooked;
    }

    int getRoomNumber() {
        return roomNumber;
    }

    string getRoomType() {
        return roomType;
    }

    void book(string name, string cnic, string contact, string date) {
        if (!isBooked) {
            isBooked = true;
            customerName = name;
            customerCNIC = cnic;
            customerContact = contact;
            bookingDate = date;
            cout << "Room " << roomNumber << " successfully booked!\n";
        } else {
            cout << "Room is already booked.\n";
        }
    }

    void checkOut() {
        if (isBooked) {
            isBooked = false;
            customerName = customerCNIC = customerContact = bookingDate = "";
            cout << "Room " << roomNumber << " has been checked out.\n";
        } else {
            cout << "Room is not booked.\n";
        }
    }
};

// ================= Developer: Huzaifa =================
class Hotel {
private:
    Room* rooms[10];

public:
    Hotel() {
        rooms[0] = new Room(101, "Single", 3000);
        rooms[1] = new Room(102, "Single", 3000);
        rooms[2] = new Room(103, "Double", 4500);
        rooms[3] = new Room(104, "Double", 4500);
        rooms[4] = new Room(105, "Suite", 8000);
        rooms[5] = new Room(106, "Suite", 8000);
        rooms[6] = new Room(107, "Single", 3000);
        rooms[7] = new Room(108, "Double", 4500);
        rooms[8] = new Room(109, "Suite", 8000);
        rooms[9] = new Room(110, "Single", 3000);
    }

    void displayAllRooms() {
        cout << "\n--- All Room Details ---\n";
        for (int i = 0; i < 10; i++) {
            rooms[i]->displayInfo();
        }
    }

    void displayBookedRooms() {
        cout << "\n--- Booked Rooms ---\n";
        bool anyBooked = false;
        for (int i = 0; i < 10; i++) {
            if (rooms[i]->getIsBooked()) {
                rooms[i]->displayInfo();
                anyBooked = true;
            }
        }
        if (!anyBooked) {
            cout << "No rooms are currently booked.\n";
        }
    }

    void bookRoom(int number, string name, string cnic, string contact, string date) {
        for (int i = 0; i < 10; i++) {
            if (rooms[i]->getRoomNumber() == number) {
                rooms[i]->book(name, cnic, contact, date);
                return;
            }
        }
        cout << "Room not found.\n";
    }

    void checkOutRoom(int number) {
        for (int i = 0; i < 10; i++) {
            if (rooms[i]->getRoomNumber() == number) {
                rooms[i]->checkOut();
                return;
            }
        }
        cout << "Room not found.\n";
    }
};

// ================= Developer: Ahsan =================
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

    return 0;
}

