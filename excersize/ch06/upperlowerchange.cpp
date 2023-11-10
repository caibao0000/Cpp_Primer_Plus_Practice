#include <iostream>
#include <cctype>

using namespace std;

int main(){
    
    char input;
    cin >> input;
    while(input != '@'){
        if(isdigit(input)){
            cin >> input;
        }
        else if(islower(input)){
            cout << char(toupper(input));
        }else if(isupper(input)){
            cout << char(tolower(input));
        }
        cin >> input;
    }
}