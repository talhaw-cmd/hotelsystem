#include "Room.h"

Room::Room(int num, string type, double p) {
    roomNumber = num;
    roomType = type;
    price = p;
    isBooked = false;
}

void Room::displayInfo() {
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

bool Room::getIsBooked() { return isBooked; }
int Room::getRoomNumber() { return roomNumber; }
string Room::getRoomType() { return roomType; }

void Room::book(string name, string cnic, string contact, string date) {
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

void Room::checkOut() {
    if (isBooked) {
        isBooked = false;
        customerName = customerCNIC = customerContact = bookingDate = "";
        cout << "Room " << roomNumber << " has been checked out.\n";
    } else {
        cout << "Room is not booked.\n";
    }
}