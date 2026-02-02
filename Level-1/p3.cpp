#include <iostream>
using namespace std;

int ReadTotalSalces(){
    int TotalSalces;
    cout << "Please Enter a Total Salces : ";
    cin >> TotalSalces;
    return TotalSalces;
}

float GetComissionPercentage(float TotalSalces){

    if (TotalSalces >= 1000000){

        return 0.01;
    }else if (TotalSalces >= 500000){

        return 0.02;
    }else if (TotalSalces <= 100000){
        return 0.03;

    }else if(TotalSalces <= 50000){
        return 0.05;

    }else {
        return 0.00;
    }

}

float CalculateTotalComission(float TotalSalces){

    GetComissionPercentage(TotalSalces) * TotalSalces;
}



int main(){
    float TotalSales = ReadTotalSalces();
    cout << "Comission Percentage = " << GetComissionPercentage(TotalSales) << endl;
    cout << "Total Comission = " << CalculateTotalComission(TotalSales) << endl;

}
