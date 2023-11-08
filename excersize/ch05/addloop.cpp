#include <iostream>

using namespace std;

int main(){
    int min = 0;
    int max = 0;
    int out = 0;
    cin >> min;
    cin >> max;
    for(int i = min; i<=max; i++){
        out += i;
    }
    cout << out <<endl;

    return 0;
}