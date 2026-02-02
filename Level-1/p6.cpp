#include <iostream>
using namespace std;

float ReadNumber(string Message){
    int Number;

    cout << Message;
    cin >> Number;
    return Number;
}

float SumNumbers(){
    int Sum , Number = 0, Counter = 1;

    do
    {
        Number = ReadNumber("Please Enter Number " + to_string(Counter));
        if (Number == -99){
            break;
        }
        Sum += Number;
        Counter++;

    } while (Number != -99);
    
    return Sum;

}

int main(){

    SumNumbers();
}
