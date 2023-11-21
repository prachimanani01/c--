#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    
    Time() : hours(0), minutes(0), seconds(0) {}

    
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    
    void readTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    
    void displayTime() const {
        cout << hours << " hours " << minutes << " minutes " << seconds << " seconds";
    }

    
    Time addTimes(const Time& t1, const Time& t2) const {
        Time result;
        result.seconds = t1.seconds + t2.seconds;
        result.minutes = t1.minutes + t2.minutes;
        result.hours = t1.hours + t2.hours;

        
        if (result.seconds >= 60) {
            result.minutes += result.seconds / 60;
            result.seconds %= 60;
        }

        
        if (result.minutes >= 60) {
            result.hours += result.minutes / 60;
            result.minutes %= 60;
        }

        return result;
    }
};

int main() {
    Time time1, time2, sum;

   
    cout << "Enter the first time:\n";
    time1.readTime();

    
    cout << "Enter the second time:\n";
    time2.readTime();

    
    sum = sum.addTimes(time1, time2);

    
    cout << "Sum of times: ";
    sum.displayTime();
    cout << endl;

    return 0;
}