#include <iostream>

using namespace std;

int fill(int input[], int limit);
void show(int input[], int size);
double average(int input[], int size);

int main(){
    int input[10];
    int num = fill(input, 10);
    show(input, num);
    if(num > 0){
        cout << average(input,num) << endl;
    }
}

int fill(int input[], int limit){
    int temp;
    int i = 0;
    for(i = 0; i<10; i++){
        cout << "pls give input" << i+1 << endl;
        cin >> temp;
        if(!cin){
            cin.clear();
            while(cin.get() != '\n'){
                continue;
            }
            cout << "Bad input; input process terminated. \n";
            break;
        } else if(temp < 0)
            break;
        input[i] = temp;
        //cin.get();
    }
    return i;
}

void show(int input[], int size){
    for(int i = 0; i<size; i++){
        cout << *(input+i) << ' ';
    }
}

double average(int input[], int size){
    double sum = 0;
    for(int i = 0; i<size; i++){
        sum+=input[i];
    }
    return sum/size;
}