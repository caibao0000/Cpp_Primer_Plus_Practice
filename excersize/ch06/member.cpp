#include <iostream>

using namespace std;

const int strsize = 50;

struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main(){
    bop member[3] = {
        {"Wimp Macho", "MIPS", "L", 0},
        {"Raki Rhodes", "Junior Programmer", "P", 1},
        {"Celia Laiter", "MIPS", "H", 2}};

    cout << "Benevolent Order of Programmers Report\na. display by name\tb. display by title\nc.display by bopname\td. display by preference\nq. quit" << endl;
    char select;
    cout << "Enter your choice";
    cin >> select;
    while(select != 'q'){
        switch(select){
            case 'a':
                for(int i = 0; i<3; i++)
                    cout << member[i].fullname << endl;
                break;
            case 'b':
                for(int i = 0; i<3; i++)
                    cout << member[i].title << endl;
                break;
            case 'c':
                for(int i = 0; i<3; i++)
                    cout << member[i].bopname << endl;
                break;
            case 'd':
                for(int i = 0; i<3; i++){
                    switch(member[i].preference){
                        case 0: 
                            cout << member[i].fullname << endl;
                            break;
                        case 1:
                            cout << member[i].title << endl;
                            break;
                        case 2:
                            cout << member[i].bopname << endl;
                            break;
                        default:
                            break;
                    }
                }
                break;
            default:
                cout << "Enter a, b, c, d, q";
                break;
        }
        cin >> select;
    }
}
