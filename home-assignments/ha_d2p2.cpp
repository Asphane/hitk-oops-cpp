#include<iostream>
using namespace std;

class Time{
public:
    int hour, minute, second;

    Time() : hour(0), minute(0), second(0) {}
    Time(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    void display() {
        cout << hour << ":" << minute << ":" << second << endl;
    }

    Time operator+(const Time& T){
        Time temp;
        temp.second = second + T.second;
        temp.minute = minute + T.minute + (temp.second)/ 60;
        temp.hour = hour +T.hour + (temp.minute)/60;

        temp.second = temp.second % 60;
        temp.minute = temp.minute % 60;
        return temp;
    }
};

int main(){
    int h,m,s;
    cout << "Enter first time (hours minutes seconds): ";
    cin >> h >> m >> s;
    Time time1(h, m, s);

    // Input second time
    cout << "Enter second time (hours minutes seconds): ";
    cin >> h >> m >> s;
    Time time2(h, m, s);

    Time sum=time1+time2;

    cout << "\nFirst Time: ";
    time1.display();

    cout << "Second Time: ";
    time2.display();

    cout << "Sum of Times: ";
    sum.display();

    return 0;
}