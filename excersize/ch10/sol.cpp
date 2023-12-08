#include "list.h"
#include <iostream>

void sqr(double& y){y*=y;}

int main(void){
    List list;
    double tmp;
    std::cout << "Enter a number (q to quit): ";
    while(std::cin >> tmp){
        list.push(tmp);
        if(list.isfull()) break;
        std::cout << "Enter a num (q to quit): ";
    }
    list.show();
    list.visit(sqr);
    list.show();
    
    return 0;
}