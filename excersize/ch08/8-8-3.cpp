#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void upper(string& str);

int main(){
    string str;
    cin >> str;
    while(str != "q" && cin){
        upper(str);
        cout << str << endl;
        cin >> str;
    }
    return 0;
}

void upper(string& str){
    for(int i = 0; i<str.length(); i++){
        str[i] = toupper(str[i]);
    }
}