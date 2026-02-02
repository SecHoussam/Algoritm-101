#include <iostream>
using namespace std;

// build Your Simple Own Power function :

int ReadNumber(){
    int number;

    cout << " Enter the Number : ";
    cin >> number;
    return number;

}

void PowerOf2_3_4(int number){

    int a , b , c;

    a = number * number;
    b = number * number * number;
    c = number * number * number * number;

    cout << "- Numner ^2 =  "<< a << endl;
    cout << "- Numner ^3 =  "<< b << endl;
    cout << "- Numner ^4 =  "<< c << endl;
}

int main(){

    PowerOf2_3_4(ReadNumber());
}
