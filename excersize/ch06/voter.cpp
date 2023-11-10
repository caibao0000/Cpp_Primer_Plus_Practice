#include <iostream>
#include <string>

using namespace std;

struct voter{
    string name;
    double num;
};

int main(){
    int count = 0;
    cout << "Please enter voter number:";
    cin >> count;
    voter * good = new voter[count];
    for(int i = 0; i < count; i++){
        cout << "Please enter voter's name: ";
        cin >> good[i].name;
        cout << "Please enter voter's money:";
        cin >> good[i].num;
    }
    cout << "Grand Patrons" << endl;
    int grandCount = 0;
    for(int i = 0; i<count;i++){
        if(good[i].num > 10000.0){
            cout << good[i].name << " " << good[i].num << endl;
            grandCount++;
        }
    }
    if(grandCount == 0){
        cout << "None" << endl;
    }

    cout << "Patrons" << endl;

    int othersCount = 0;
    for(int i = 0; i<count;i++){
        if(good[i].num <= 10000.0){
            cout << good[i].name << " " << good[i].num << endl;
            othersCount++;
        }
    }
    if(othersCount == 0){
        cout << "None" << endl;
    }
    delete [] good;
}