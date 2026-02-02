#include <iostream>
using namespace std;

// ATM Pin

string ReadPinCode(){

    string PinCode;
    cout << "Please Enter Pin Code : ";
    cin >> PinCode;
    return PinCode;

}

bool Login(){

    string PinCode;

    do
    {
        PinCode = ReadPinCode()
        if (PinCode == 1234){
            return 1;
        }else {
            cout << "Wrong Pin \n";
            system("color 4F");
        }
        
    } while (PinCode != "1234");

    return 0;  

}

int main(){

    if (Login()){

        system("color 2F");
        cout << "Your Account Balance is : "<< 7500 << endl;
    }

}
