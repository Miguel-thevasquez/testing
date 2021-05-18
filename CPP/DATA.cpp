#include "DATA.h"
#include <iostream>
using namespace std;

Data::Data(){}

Data::Data(int num1, int num2){
    this-> num1= num1;
    this-> num2 = num2;
}

void Data::showData(){
    cout << "The number " << num1 << endl;
    cout << "The number " << num2 << endl;
}