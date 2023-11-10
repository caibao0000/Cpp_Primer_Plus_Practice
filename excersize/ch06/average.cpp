#include <iostream>
#include <array>

using namespace std;

int main(){
    array<double,5> input {};
    double sum = 0.0;
    double mean = 0.0;
    int i = 0;
    int count = 0;
    for(i; i<10; i++){
        cout << "Enter a num:";
        cin >> input[i];
        if(!cin){
            break;
        }
        sum += input[i];
    }
    if(i > 0){
        mean = sum/i;
        for(int j = 0; j<i; j++){
            if(mean < input[j]){
                count++;
            }
        }
    }
    cout << i << "mean " << mean << ", count = " << count <<endl;
}