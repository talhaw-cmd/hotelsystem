#pragma once
#include <iostream>
#include <string>
using namespace std;

class Room {
private:
    int roomNumber;
    string roomType;
    double price;
    bool isBooked;
    string customerName, customerCNIC, customerContact, bookingDate;

public:
    Room(int num, string type, double p);
    void displayInfo();
    bool getIsBooked();
    int getRoomNumber();
    string getRoomType();
    void book(string name, string cnic, string contact, string date);
    void checkOut();
};