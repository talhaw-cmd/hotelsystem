#include "Hotel.h"
Hotel::Hotel() {
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
void Hotel::displayAllRooms() {
    cout << "\n--- All Room Details ---\n";
    for (int i = 0; i < 10; i++) {
        rooms[i]->displayInfo();
    }
}
void Hotel::displayBookedRooms() {
    cout << "\n--- Booked Rooms ---\n";
    bool anyBooked = false;
    for (int i = 0; i < 10; i++) {
        if (rooms[i]->getIsBooked()) {
            rooms[i]->displayInfo();
            anyBooked = true;
        }
    }
