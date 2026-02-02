#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message){

    int Num;
    do
    {
        cout << Message;
        cin >> Num;

    } while (Num <= 0);

    return Num;
}

float MonthInstallment(float LoanAmount, float HowManyMonths){
    
    return (float) LoanAmount / HowManyMonths;
}


int main(){

    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount :");
    float HowManyMonths = ReadPositiveNumber("How Many Months : ");

    cout << "\n - Monthly Installment = "<< MonthInstallment(LoanAmount,HowManyMonths);
}
