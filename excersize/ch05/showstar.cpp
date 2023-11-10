#include <iostream>

using namespace std;

int main(){
    int lineNum;
    cout << "Enter number of rows: ";
    cin >> lineNum;
    for(int i = 1; i <= lineNum; i++){
        for(int j = 0; j<lineNum - i; j++){
            cout << ".";
        }

        for(int j = 0; j<i; j++){
            cout << "*";
        }
        cout << endl;
    }
}