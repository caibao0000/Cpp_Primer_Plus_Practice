#include "list.h"
#include <iostream>

List::List(){
    top = 0;
}

bool List::isempty() const{
    return top == 0;
}

bool List::isfull() const{
    return top == MAX;
}

bool List::push(const Item& item){
    if(top < MAX){
        items[top++] = item;
        return true;
    } else{
        return false;
    }
}

void List::show() const{
    if(isempty())
        std::cout << "List is empty.\n";
    else
        for(int i = 0; i<top; i++)
            std::cout << "Item #" << i+1 << ": "<<items[i] << '\n';
}

void List::visit(void (*pf)(Item & item)){
    for(int i = 0; i<top; i++)
        pf(items[i]);
}