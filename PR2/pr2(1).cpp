#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inches;

public:
   
    Distance() : feet(0), inches(0) {}

    
    Distance(int ft, int in) : feet(ft), inches(in) {}

    
    void readDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    
    void displayDistance() const {
        cout << feet << " feet " << inches << " inches";
    }

    
    Distance addDistances(const Distance& d1, const Distance& d2) const {
        Distance result;
        result.feet = d1.feet + d2.feet;
        result.inches = d1.inches + d2.inches;

       
        if (result.inches >= 12) {
            result.feet += result.inches / 12;
            result.inches %= 12;
        }

        return result;
    }
};

int main() {
    Distance distance1, distance2, sum;

   
    cout << "Enter the first distance:\n";
    distance1.readDistance();

    
    cout << "Enter the second distance:\n";
    distance2.readDistance();

    
    sum = sum.addDistances(distance1, distance2);

    
    cout << "Sum of distances: ";
    sum.displayDistance();
    cout << endl;

    return 0;
}