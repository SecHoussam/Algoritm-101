#include <iostream>
using namespace std;

// Pay Remainder 

float ReadPositiveNumber(string Message){
    int num1;
    cout << Message;
    cin >> num1;
    return num1;
}

float CalculateRemainder(float TotalBill , float TotalCashPaid){
    return TotalBill - TotalCashPaid;
}

int main(){

    float TotalBill = ReadPositiveNumber("Please Enter Total bill : ");
    float TotalCashPaid = ReadPositiveNumber("Please Enter Total Cash Paid :");

    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid = " << TotalCashPaid << endl;

    cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;
}
