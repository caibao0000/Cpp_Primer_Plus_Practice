#include <iostream>
#include <fstream>

using namespace std;

struct voter{
    string name;
    double num;
};

int main(){
    ifstream inFile;
    int count = 0;
    inFile.open("./voter.txt");
    inFile >> count;
    inFile.get();
    voter * good = new voter[count];
    for(int i = 0; i < count; i++){
        getline(inFile, good[i].name);
        inFile >> good[i].num;
        inFile.get();
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