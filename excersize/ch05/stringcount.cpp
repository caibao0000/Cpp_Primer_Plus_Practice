#include <iostream>
#include <string>

using namespace std;

int main(){
    string myWord;
    int count = 0;
    cin >> myWord;
    while(myWord != "done"){
        cin >> myWord;
        count++;
    }
    cout << "You entered a total of " << count << " words." << endl;
}