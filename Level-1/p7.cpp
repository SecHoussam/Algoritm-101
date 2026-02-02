#include <iostream>
#include <cmath>
using namespace std;

// check if it is a Prime Number Algorithm .

enum enPrimeCheck { Prime = 1 , NotPrime = 2};

float ReadPositiveNumber(string Message){

    float number;

    do
    {
       cout << Message;
       cin >> number;

    } while (number <= 0);

    return number;
    
}

enPrimeCheck CheckPrime(int number){

    int m = round(number / 2);
    for (int i = 2; i <= m; i++){

        if(number % i == 0){
            return enPrimeCheck::NotPrime;
        }
    }

    return enPrimeCheck::Prime;
    
}

void PrintNumberType(int Number){

    switch (CheckPrime(Number))
    {
    case enPrimeCheck::Prime:
        cout << "The Number is Prime \n";
        break;
    case enPrimeCheck::NotPrime:
        cout << "the number is not prime \n";
        break;
    }
}


int main(){

        PrintNumberType(ReadPositiveNumber("Enter a Positive Number : "));
    
}
