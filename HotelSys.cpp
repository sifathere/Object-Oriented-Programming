#include <iostream>
#include <string> 
using namespace std;

class Hotel {
protected:
    string hotelName;
    string location;
    int totalRooms;

public:
    Hotel(string name, string loc, int rooms) {
        hotelName=name;
        location=loc;
        totalRooms=rooms;
    }
    virtual void showDetails() {
        cout << "Hotel Name: " << hotelName << endl;
        cout << "Location: " << location << endl;
        cout << "Total Rooms: " << totalRooms << endl;
    }

    int getTotalRooms() {
        return totalRooms;
    }

    virtual ~Hotel() {}
};

class Room : public Hotel {
protected:
    int roomNumber;
    string roomType;
    bool isAvailable;
    double price;

public:
    Room(string name, string loc, int rooms, int roomNo, string type, double pricePerNight)
        : Hotel(name, loc, rooms) {
        roomNumber=roomNo;
        roomType=type;
        price=pricePerNight;
        bool isAvailable(true);
    }

    void showRoomDetails() {
        showDetails();
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
        cout << "Price per Night: " << price <<"$"<<endl;
        cout << "Availability: " << (isAvailable ? "Available" : "Occupied") << endl;
    }

    bool checkAvailability() {
        return isAvailable;
    }

    void bookRoom() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Room " << roomNumber << " booked successfully!" << endl;
        } else {
            cout << "Room " << roomNumber << " is already occupied." << endl;
        }
    }

    void vacateRoom() {
        if (!isAvailable) {
            isAvailable = true;
            cout << "Room " << roomNumber << " is now available!" << endl;
        } else {
            cout << "Room " << roomNumber << " is already vacant." << endl;
        }
    }

    double getPrice() {
        return price;
    }
};

class Customer : public Room {
private:
    string customerName;
    int numberOfDays;

public:
    Customer(string hotelName, string loc, int rooms, int roomNo, string roomType, double pricePerNight, string custName, int days)
        : Room(hotelName, loc, rooms, roomNo, roomType, pricePerNight) {
        customerName=custName;
        numberOfDays=days;
    }

    void showCustomerDetails() {
        cout << "Customer Name: " << customerName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
        cout << "Number of Days: " << numberOfDays << endl;
        cout << "Total Cost: " << calculateTotalCost() <<"$"<< endl;
    }

    double calculateTotalCost() {
        return price * numberOfDays;
    }
};

int main() {
    string hotelName = "Five Star";
    string location = "Bangladesh";
    int totalRooms = 500;

    Room r1(hotelName, location, totalRooms, 501, "Deluxe", 200.0);
    Room r2(hotelName, location, totalRooms, 502, "Standard", 100.0);

    cout << "Room Details:" << endl;
    r1.showRoomDetails();
    r1.showRoomDetails();

    cout<<"----------"<<endl;

    cout<<"Book a room: "<<endl;
    r1.bookRoom();
    r1.showRoomDetails();

    cout<<"----------"<<endl;

    cout<<"Vacate a room: "<<endl;
    r2.vacateRoom();
    r2.showRoomDetails();

    cout<<"----------"<<endl;

    Customer c1(hotelName, location, totalRooms, 501, "Deluxe", 200.0, "Shuvo", 5);
    c1.bookRoom();
    c1.showCustomerDetails();

    return 0;
}
