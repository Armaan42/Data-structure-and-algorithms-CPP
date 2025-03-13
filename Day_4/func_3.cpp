#include<iostream>
using namespace std;

string minutes_to_hours_minutes(int minu) {
    int hours = minu / 60;    
    int minutes = minu % 60;  

    return to_string(hours) + " hours and " + to_string(minutes) + " minutes";
}

int main() {
    int minu;
    cin >> minu;

    cout << minutes_to_hours_minutes(minu) << endl;

    return 0;
}