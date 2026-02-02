#include <iostream>
using namespace std;

enum enDayOfWeeks {Sat = 1, Sun = 2, Mon = 3, Tue = 4 , Wed = 5, Thu = 6, Fri = 7};

// this function Generics
int ReadNumberInRange(string Message,int from , int to){

   int Number;
   do
   {
        cout << Message;
        cin >> Number;

   } while (Number < from || Number > to);

   return Number;

}

enDayOfWeeks ReadDayOfWeek(){
    return (enDayOfWeeks) ReadNumberInRange("Please Enter The Number");
}

string GetDayOfWeek(enDayOfWeeks Day){

    switch (Day)
    {
    case enDayOfWeeks::Sat:
        return "Saturday";
    case enDayOfWeeks::Sun:
        return "Sunday";
    case enDayOfWeeks::Mon:
        return "Monday";
    case enDayOfWeeks::Tue:
        return "Tuesday";
    case enDayOfWeeks::Wed:
        return "Wednesday";
    case enDayOfWeeks::Thu:
        return "Thursday";
    case enDayOfWeeks::Fri:
        return "Friday";
    default:
        return "Not Valid Day !";
    }

}

int main(){

    cout << GetDayOfWeek(ReadDayOfWeek());

}
