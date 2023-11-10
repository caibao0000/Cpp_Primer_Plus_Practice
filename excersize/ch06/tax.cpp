#include <iostream>

using namespace std;

int main(){

    double income = 0.0;
    cout << "Enter your income";
    cin >> income;
    double tax = 0.0;
    while(income > 0 && cin){
        if(income > 35000.0){
            tax += 10000.0*0.1+20000.0*0.15+(income - 35000.0)*0.2;
        } else if(income>15001.0){
            tax += 10000.0*0.1+(income-15001.0)*0.15;
        } else if(income>5001.0){
            tax += (income - 5001.0)*0.1;
        }
        cout << tax << endl;
        cout << "Enter your income again:";
        cin >> income;
    }
}