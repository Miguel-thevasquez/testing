#ifndef DATA_H
#define DATA_H
#include <iostream>

class Data{
    protected:
        int num1;
        int num2;
    public:
    Data();
    Data(int,int);

    void showData();
};

#endif