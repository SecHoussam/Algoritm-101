#include <iostream>
using namespace std;

struct strTaskDuration {
    int Days , Hours , Minutes , Seconds;
}

int ReadNumbers(string Message){

    int number = 0;

    do
    {
       cout << Message;
       cin >> number;

    } while (number <= 0);

    return number;

}

strTaskDuration ReadTaskDuration (){

    strTaskDuration TaskDuration;

    TaskDuration.Days = ReadNumbers("Please Enter Number Of Days : ");
    TaskDuration.Hours = ReadNumbers("Please Enter Number Of Hours : ");
    TaskDuration.Minutes = ReadNumbers("Please Enter Number Of Munites : ");
    TaskDuration.Seconds = ReadNumbers("Please Enter Number Of Seconds : ");
    return TaskDuration;
}

int TaskDurationInSecodns(strTaskDuration TaskDuration){

    int DurationInSecond = 0;
    DurationInSecond = TaskDuration.Days * 24 * 60 * 60;
    DurationInSecond += TaskDuration.Hours * 60 * 60;
    DurationInSecond += TaskDuration.Minutes * 60;
    DurationInSecond += TaskDuration.Seconds;

    return DurationInSecond;
}


int main(){

    cout << "Task Duration In Seconds: " << TaskDurationInSecodns(ReadNumbers("Please Enter The Number : "));
    cout << endl;
}
