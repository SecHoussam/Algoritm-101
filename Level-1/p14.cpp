#include <iostream>
using namespace std;

/*
   - This Procedure Print form ( a to z ) 
   - loop Of Ascii Table A = 65 , Z = 90) 
*/

void PrintLettersAtoZ(){

    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
    
}
int main(){

    PrintLettersAtoZ();

}
