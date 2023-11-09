#include <iostream>
#include <string>
#include <numeric>

using namespace std;
int main(){
    string months[12] {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int count[12]{};
    for(int i = 0; i < sizeof(months)/sizeof(months[0]);i++){
        cout << months[i] << ":";
        cin >> count[i];
    }
    cout << accumulate(count, count+12, 0) << endl;
}