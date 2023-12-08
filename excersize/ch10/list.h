#pragma once

typedef double Item;

class List{
    private:
        enum {MAX=10};
        Item items[MAX];
        int top;
    public:
        List();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item& item);
        void show() const;
        void visit(void (*pf)(Item &));
};