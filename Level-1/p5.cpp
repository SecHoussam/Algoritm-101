#include <iostream>
using namespace std;

// Simple Calculator :

enum enOperationType {add ='+', Subtract='-', Multiply='*',Divide='/'};

float ReadNumber(string Message ){
    int Number;
    cout << "Please Enter a Number : ";
    cin >> Number;
    return Number;

}
enOperationType ReadOpType(){
    char OpType = '+';

    cout << "Please Enter Operation Type ( + , - , * , / ) ";
    cin >> OpType;
    // casting form char to enum operation type 
    return (enOperationType) OpType;

}

float Calculate(float Number1, float Number2 , enOperationType OpTypes){

    switch (OpTypes)
    {
    case enOperationType::add:
        return Number1 + Number2;

    case enOperationType::Subtract:
        return Number1 - Number2;

    case enOperationType::Multiply:
        return Number1 * Number2;

    case enOperationType::Divide:
        return Number1 / Number2;
    
    default:
        return Number1 + Number2;
    }

}

int main(){

    float Number1 = ReadNumber("Please Enter The First Number : ");
    float Number2 = ReadNumber("Please Enter The Second Number : ");
    enOperationType Optypes = ReadOpType();

    cout << "Result = " << Calculate(Number1, Number2 , Optypes);
}
