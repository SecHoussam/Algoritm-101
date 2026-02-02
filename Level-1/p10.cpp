#include <iostream>
using namespace std;

float ReadHours(string Messages){

    float number = 0;
    do
    {
        cout << Messages;
        cin >> number;
    } while (number <= 0);

    return number;
}

float HoursToWeeks(float number){

    return (float) number / 24 / 7;
}

float HoursToDays(float number){

    return (float) number / 24;
}

float DaysToWeeks(float NumbersOfDays){

    return (float) NumbersOfDays / 7;

}

int main(){
    float NumberOfHours = ReadHours("Please Enter Number Of Hours : ");
    float NumbersOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumbersOfDays);

    cout << "Number Of Hours = "<< NumberOfHours << endl;
    cout << "Number Of Days  = "<< NumbersOfDays << endl;
    cout << "Number Of Weeks = "<< NumberOfWeeks << endl;

}
