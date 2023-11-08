#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    int num = 0;
    cout << "Pls input num";
    cin >> num;
    while(num){
        sum += num;
        cin >> num;
    }
    cout << sum;

    return 0;
}