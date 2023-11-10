#include <iostream>
#include <string>

using namespace std;

struct car{
    string name;
    int year;
};

int main(){

    int carNum = 0;
    cout << "How many cars do you wish to catalog?";
    (cin >> carNum).get();
    car* yourCar = new car[carNum];
    for(int i = 0; i<carNum; i++){
        cout << "Car #" << i << ":" << endl;
        cout << "Please enter the make:";
        //getline(cin, yourCar[i].name);
        cin >> yourCar[i].name;
        cout << "Please enter the year made:";
        (cin >> yourCar[i].year).get();
    }
    cout << "Here is your collection:" << endl;
    for(int i = 0; i < carNum; i++){
        cout << yourCar[i].year << yourCar[i].name << endl;
    }
    delete [] yourCar;

    return 0;
}