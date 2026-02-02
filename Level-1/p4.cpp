#include <iostream>
using namespace std;

// Piggy Bank Calculator :

struct stPiggyBank {
    int Pennices , Nickels , Dimes , Quarters , Dollars;
};

stPiggyBank ReadPiggyBankContent(){

    stPiggyBank PiggyBank;
    cout << "Please enter Pennices : ";
    cin >> PiggyBank.Pennices;
    cout << endl;

    cout << "Please enter Nickels : ";
    cin >> PiggyBank.Nickels;
    cout << endl;

    cout << "Please enter Dimes : ";
    cin >> PiggyBank.Dimes;
    cout << endl;

    cout << "Please enter Quarters : ";
    cin >> PiggyBank.Quarters;
    cout << endl;

    cout << "Please enter Dollars : ";
    cin >> PiggyBank.Dollars;
    cout << endl;

    return PiggyBank;
}

int CalculateTotalPennices(stPiggyBank PiggyBank){

    int TotalPennies = 0;
    TotalPennies = PiggyBank.Pennices * 1 + PiggyBank.Nickels * 5 + PiggyBank.Dimes * 10 + PiggyBank.Quarters * 25 + PiggyBank.Dollars * 100;
    return TotalPennies;
}


int main(){

    int TotalPennies = CalculateTotalPennices(ReadPiggyBankContent());
    cout << "Total Pennies : "<< TotalPennies << endl;
    cout << "Total Dollars : " << (float) TotalPennies / 100;
}
