#include <iostream>
using namespace std;

// read number
int ReadNumber() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    return number;
}

// read power
int ReadPower() {
    int power;
    cout << "Enter the power: ";
    cin >> power;
    return power;
}

//power function (factorial-like logic but for power)
int Power(int number, int power) {

    if(number == 0){

        return 1;

    }

    int result;

    for (int i = 1; i < power; i++) {
        result = i * number;
    }

    return result;
}

int main() {
    int number = ReadNumber();
    int power  = ReadPower();

    cout << "Result = " << Power(number, power) << endl;

    return 0;
}
