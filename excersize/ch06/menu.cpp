#include <iostream>

using namespace std;

int main(){
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore\tp) pianist\nt) tree\tg) game"<< endl;
    char select;
    bool finish = false;
    while(!finish){
        cin >> select;
        switch (select)
        {
        case 'c':
            cout << "carnivore" << endl;
            finish = true;
            break;
        case 'p':
            finish = true;
            cout << "pianist" << endl;
            break;
        case 't':
            finish = true;
            cout << "tree" << endl;
            break;
        case 'g':
            finish = true;
            cout << "game" << endl;
            break;
        default:
            cout << "Please enter a c, p, t, or g:";
            break;
        }
    }
}