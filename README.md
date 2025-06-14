Project Title: Hotel Management System
Programming Language: C++
Submitted by: Talha, Huzaifa, Ahsan
Semester: 2nd
Course: Object-Oriented Programming (OOP)
Project Type: Console-Based Hotel Room Booking System


---

Table of Contents

1. Project Overview


2. Key Objectives


3. Tools and Environment


4. Technical Features


5. Class Responsibilities


6. Code Flow Explanation


7. Data Structure and Initialization


8. Input and Output Format


9. Step-by-Step Execution Guide


10. Limitations


11. Future Enhancements


12. File Structure


13. Final Notes




---

1. Project Overview

This project simulates a simple hotel management system built entirely in C++ using Object-Oriented Programming principles. The system enables users (such as hotel staff) to perform basic operations such as booking a room, checking out customers, and viewing room statuses. It is a menu-driven application that runs in a console environment. All data is stored in memory and is lost after the program terminates.


---

2. Key Objectives

To implement core Object-Oriented Programming concepts like encapsulation, abstraction, and modularity.

To simulate a real-world scenario of managing a hotel through code.

To demonstrate practical use of classes, arrays, member functions, and conditional logic.

To prepare students for larger-scale system design projects in future semesters.



---

3. Tools and Environment

Programming Language: C++

IDEs Supported: Dev C++, Code::Blocks, Visual Studio, or any standard C++ environment

Input Method: Command-line input via console

Output Method: Display to standard output (console)



---

4. Technical Features

Room objects created dynamically using new operator.

Ten unique rooms initialized with room number, type, and price.

Booking system that records customer name, CNIC, contact, and date.

Check-out functionality that clears booking data and frees the room.

Menu-based interface using a do-while loop and switch statements.

No use of external libraries—entirely based on standard C++ features.



---

5. Class Responsibilities

Room Class (Developer: Talha)

Purpose: Manages individual room data and customer booking details.

Member Variables:

roomNumber, roomType, price, isBooked

customerName, customerCNIC, customerContact, bookingDate


Key Methods:

displayInfo() – Displays all details of a room

book(...) – Assigns booking data to a room

checkOut() – Clears booking data

getRoomNumber(), getIsBooked(), getRoomType() – Helper methods



Hotel Class (Developer: Huzaifa)

Purpose: Manages the collection of all rooms and operations on them.

Member Variables:

Array of pointers to Room objects


Key Methods:

displayAllRooms() – Shows details of all rooms

displayBookedRooms() – Shows only booked rooms

bookRoom(...) – Books a specified room

checkOutRoom(...) – Checks out a specified room



Main Function (Developer: Ahsan)

Purpose: Controls user interaction and manages program flow.

Functionality:

Presents a menu to the user

Accepts and validates input

Calls appropriate methods based on user selection




---

6. Code Flow Explanation

The program starts by initializing a Hotel object containing 10 predefined rooms.

A do-while loop is used to display a repeating menu until the user exits.

cin and getline functions are used together to safely accept both numeric and string input.

Conditional logic determines which class methods to invoke based on user input.

The application ends gracefully when the user selects the "Exit" option.



---

7. Data Structure and Initialization

The hotel has exactly ten rooms hardcoded during object construction:

Room Number	Type	Price (PKR)

101	Single	3000
102	Single	3000
103	Double	4500
104	Double	4500
105	Suite	8000
106	Suite	8000
107	Single	3000
108	Double	4500
109	Suite	8000
110	Single	3000



---

8. Input and Output Format

Input

Room Number (Integer)

Customer Name (String)

CNIC Number (String)

Contact Number (String)

Booking Date (String in DD-MM-YYYY format)


Output

Room status: Booked or Available

Customer booking details

Confirmation messages for booking or check-out

Error messages if room is not found or already booked



