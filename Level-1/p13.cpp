#include <iostream>
using namespace std;

enum enMonthYear {
    Jan = 1, Feb =2, Mar = 3,
    Apr = 4, May = 5, Jun = 6, 
    Jul = 7, Aug = 8, Sep = 9, 
    Oct = 10,  Nov = 11, Dec = 12
};

int ReadNumberInRange(string Message, int From, int To){

    int Number;

    do
    {
        cout << Message;
        cin >> Number;

    } while (Number < From ||  Number > To);
    
    return Number;  
}

enMonthYear ReadMonthOfYear(){
    return (enMonthYear) ReadNumberInRange("Please Enter Number From 1 to 12 : ");
}


string GetMonthOfYear(enMonthYear Month){

        switch (Month)
        {
        case enMonthYear::Jan:
            return "January";
        case enMonthYear::Feb:
            return "February";
        case enMonthYear::Mar:
            return "March";
        case enMonthYear::Apr:
            return "April";
        case enMonthYear::May:
            return "May";
        case enMonthYear::Jun:
            return "Jun";
        case enMonthYear::Jul:
            return "July";
        case enMonthYear::Aug:
            return "August";
        case enMonthYear::Sep:
            return "September";
        case enMonthYear::Oct:
            return "October";
        case enMonthYear::Nov:
            return "November";
        case enMonthYear::Dec:
            return "December";
        default:
            return "Not a Valid Month";
        }

}
int main(){

    cout << GetMonthOfYear(ReadMonthOfYear()) << endl;


}
