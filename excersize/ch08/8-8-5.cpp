#include <iostream>

using namespace std;

template <typename T> 
T max5(T* iArray){
    T maxValue;
    for(int i = 0; i<5;i++){
        maxValue = maxValue < iArray[i] ? iArray[i]:maxValue;
    }

    return maxValue;
}

int main(){
    int intArray[5]{1,2,3,4,5};
    double doubleArray[5]{3.0,4.0,6.0,8.6,5.0};

    cout << max5(intArray) << endl;
    cout << max5(doubleArray) << endl;

    return 0;
}