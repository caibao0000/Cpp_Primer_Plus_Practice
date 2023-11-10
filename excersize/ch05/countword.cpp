#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char myWord[50]{};
    int count = 0;
    cin >> myWord;
    while(strcmp(myWord, "done")){
        cin >> myWord;
        count++;
    }
    cout << "You entered a total of " << count << " words." << endl;
}