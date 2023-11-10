#include <iostream>
#include <string>
#include <numeric>

using namespace std;
int main(){
    string months[12] {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int count[3][12]{};
    int sum = 0;
    for(int j = 0; j < 3; j++){
        cout << "input year " << j << "'s sales" << endl;
        for(int i = 0; i < sizeof(months)/sizeof(months[0]);i++){
            cout << months[i] << ":";
            cin >> count[j][i];
            if(!cin){
                cin.clear();
                cin.get();
            }
            sum += count[j][i];
        }
    }
    cout << sum << endl;
}