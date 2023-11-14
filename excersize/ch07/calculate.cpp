#include <iostream>

using namespace std;

double calculate(double a, double b, double (*pf)(double x, double y));
double add(double x, double y);
double populate(double x, double y);
double subtract(double x, double y);

int main(){
    double x,y;
    double (*pf[3])(double,double);
    pf[0] = add;
    pf[1] = populate;
    pf[2] = subtract;
    cout << "Enter 2 num:";
    cin >> x;
    cin >> y;
    while(cin){
        for(int i = 0; i<3; i++)
            cout << calculate(x,y,*pf[i]) << endl;
        cin >> x;
        cin >> y;
    }
}

double add(double x, double y){
    return x+y;
}

double populate(double x, double y){
    return x*y;
}

double subtract(double x, double y){
    return x-y;
}

double calculate(double a, double b, double (*pf)(double x, double y)){
    return (*pf)(a,b);
}