#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    // Declaring variables
    int hour;
    int minute;
    int second;
    int a;
    int err;

    // Setting the variables to 0 and clock loop
    err = a = 0;
    while(err == 0){
        cout << "Enter hours: " << endl;
        cin >> hour;
        cout << "Enter minutes: " << endl;
        cin >> minute;
        cout << "Enter seconds: " << endl;
        cin >> second;

        if(hour < 24 && minute < 60 && second < 60){
            err++;
        }
}