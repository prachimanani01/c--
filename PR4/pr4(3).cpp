#include <iostream>
#include <string>

using namespace std;

class Hotel {
    private:

        int id;
        string name;
        string type;
        int staff_size;
        int room_size;
        int establish_year;
        string address;
        string rating_type;

    public:

        void setId(int newId) {
            id = newId;
        }

        void setName(const string& newName) {
            name = newName;
        }

        void setType(const string& newType) {
            type = newType;
        }

        void setStaffSize(int newSize) {
            staff_size = newSize;
        }

        void setRoomSize(int newSize) {
            room_size = newSize;
        }

        void setEstablishYear(int newYear) {
            establish_year = newYear;
        }

        void setAddress(const string& newAddress) {
            address = newAddress;
        }

        void setRatingType(const string& newRatingType) {
            rating_type = newRatingType;
        }

        

        int getId() const {
            return id;
        }

        const string& getName() const {
            return name;
        }

        const string& getType() const {
            return type;
        }

        int getStaffSize() const {
            return staff_size;
        }

        int getRoomSize() const {
            return room_size;
        }

        int getEstablishYear() const {
            return establish_year;
        }

        const string& getAddress() const {
            return address;
        }

        const string& getRatingType() const {
            return rating_type;
        }

};

int main() {
    
    Hotel myHotel;

    myHotel.setId(1);
    myHotel.setName("hotel diamond");
    myHotel.setType("Resort");
    myHotel.setStaffSize(150);
    myHotel.setRoomSize(250);
    myHotel.setEstablishYear(2000);
    myHotel.setAddress("Main Street, Cityville"); 
    myHotel.setRatingType("Five-star");



    cout << "Hotel ID :- " << myHotel.getId() <<endl;
    cout << "Hotel Name :- " << myHotel.getName() <<endl;
    cout << "Hotel Type :- " << myHotel.getType() <<endl;
    cout << "Staff Size :- " << myHotel.getStaffSize() <<endl;
    cout << "Room Size :- " << myHotel.getRoomSize() <<endl;
    cout << "Establish Year :- " << myHotel.getEstablishYear() <<endl;
    cout << "Address :- " << myHotel.getAddress() <<endl;
    cout << "Rating Type :- " << myHotel.getRatingType() <<endl;

    return 0;
}
