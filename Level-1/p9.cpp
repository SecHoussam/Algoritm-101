#include <iostream>
using namespace std;

float ReadPositiveNumber(string Messages){
    float number = 0;

    do
    {
        cout << Messages;
        cin >> number;
    } while (number <= 0);

    return number;
    
}

float TotalBillAferServiceAndTax(float TotalBill){

    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;
    return TotalBill;
}

int main(){

    float TotalBill = ReadPositiveNumber("Please Enter Total Bill : ");

    cout << "total bill = " << TotalBill << endl;
    cout << "Total Bill Afer Service And Tax = "<< TotalBillAferServiceAndTax(TotalBill);

}
