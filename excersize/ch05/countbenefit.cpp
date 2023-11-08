#include <iostream>

using namespace std;

int main(){
    double daphne = 10.0;
    double cleo = 5.0;
    int i = 1;
    while(cleo <= daphne){
        daphne += 10.0;
        cleo += (100+cleo)*0.05;
        i++;
    }

    cout << i << endl;
}