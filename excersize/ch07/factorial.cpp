#include <iostream>

using namespace std;

int factorial(int num);

int main(){
    int num;
    cout << "input wanted num";
    cin >> num;
    cout << factorial(num) << endl;
    return 0;
}

int factorial(int num){
    int lastfactorial = 1;
    if(num > 1){
        lastfactorial = factorial(num - 1);
    } else{
        num = 1;
    }
    return lastfactorial*num;
}