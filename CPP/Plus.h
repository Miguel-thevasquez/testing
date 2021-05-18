#ifndef Plus_H
#define Plus_H
#include "DATA.h"

class Plus: public Data{
    private:
        int num1;
        int num2;
    public:
        Plus();
        Plus(int,int);
    
    void showPlus();

};

#endif