#include <iostream>

using namespace std;

double regmean(double a, double b);

int main(){
    double a,b;
    cin >> a;
    cin.get();
    cin >> b;
    while((a>1e-3) && (b>1e-3)){
        cout << regmean(a,b) << endl;
        cin >> a;
        cin.get();
        cin >> b;
    }
}

double regmean(double a, double b){
    return 2.0*a*b/(a+b);
}